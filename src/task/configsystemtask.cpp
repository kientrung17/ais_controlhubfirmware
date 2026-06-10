#include "task/configsystemtask.h"
#include "common/common.h"
#include "common/storeflashmanager.h"
#include "loggermanager.h"
#include "message/configsystemmessage.h"
#include "esp_system.h"
#include <fcntl.h>
#include <string.h>

ConfigSystemTask::ConfigSystemTask(std::string nameTask, int numElementQueueSet)
    : TaskAbstract(nameTask, numElementQueueSet)
{
    memset(&mRemoteAddr, 0, sizeof(mRemoteAddr));
}

ConfigSystemTask::~ConfigSystemTask()
{
    if (mSockFd >= 0) {
        close(mSockFd);
    }
}

void ConfigSystemTask::onInitProcess()
{
    LOG_INFO("ConfigSystemTask", "Initializing ConfigSystemTask on UDP port %d", UDP_LOCAL_PORT_SYSTEM_CONFIG);
    mSockFd = socket(AF_INET, SOCK_DGRAM, IPPROTO_IP);
    if (mSockFd < 0) {
        LOG_ERROR("ConfigSystemTask", "Failed to create socket!");
        return;
    }

    struct sockaddr_in local_addr;
    memset(&local_addr, 0, sizeof(local_addr));
    local_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    local_addr.sin_family = AF_INET;
    local_addr.sin_port = htons(UDP_LOCAL_PORT_SYSTEM_CONFIG);

    if (bind(mSockFd, (struct sockaddr *)&local_addr, sizeof(local_addr)) < 0) {
        LOG_ERROR("ConfigSystemTask", "Failed to bind socket!");
        close(mSockFd);
        mSockFd = -1;
        return;
    }

    // Set socket to non-blocking
    int flags = fcntl(mSockFd, F_GETFL, 0);
    if (flags >= 0) {
        fcntl(mSockFd, F_SETFL, flags | O_NONBLOCK);
    }
    LOG_INFO("ConfigSystemTask", "Socket created and bound successfully.");
}

void ConfigSystemTask::onTimer100HzProcess()
{
    mCounter100Hz++;
    processReadDataFromUDP();
}

void ConfigSystemTask::onQueueSetMessageProcess(OSBase::QueueHandle queue_sem)
{
    // Không có hàng đợi nào đăng ký vào tác vụ này
}

void ConfigSystemTask::processReadDataFromUDP()
{
    if (mSockFd < 0) {
        return;
    }

    uint8_t rawBuffer[384];
    struct sockaddr_in source_addr;
    socklen_t socklen = sizeof(source_addr);
    
    int length = recvfrom(mSockFd, rawBuffer, sizeof(rawBuffer), 0, (struct sockaddr *)&source_addr, &socklen);
    if (length > 0) {
        // Store remote address for replies
        mRemoteAddr = source_addr;

        CodecMessage codecMsg;
        if (length >= 3) {
            codecMsg.mMsgID = rawBuffer[0];
            codecMsg.mMsgDataLength = (rawBuffer[1] << 8) | rawBuffer[2];
            if (codecMsg.mMsgDataLength <= CodecMessage::MAX_DATA_LENGTH && 
                codecMsg.mMsgDataLength <= (length - 3)) {
                memcpy(codecMsg.mDataRaw, &rawBuffer[3], codecMsg.mMsgDataLength);

                switch (codecMsg.mMsgID) {
                    case 1: // Bản tin Ping (Discovery)
                        processorPingMessage();
                        break;
                    case 2: // Bản tin ghi cấu hình mới CONFIG_SYSTEM_MESSAGE
                        processorConfigSystemMessage(&codecMsg);
                        break;
                    case 3: // Bản tin yêu cầu đọc cấu hình (READ_CONFIG_SYSTEM)
                        processorCommandSystemMessage(&codecMsg);
                        break;
                    default:
                        LOG_ERROR("ConfigSystemTask", "Unknown Message ID received: %d", codecMsg.mMsgID);
                        break;
                }
            } else {
                LOG_ERROR("ConfigSystemTask", "Message data length mismatch: expected %d, got %d", codecMsg.mMsgDataLength, length - 3);
            }
        }
    }
}

void ConfigSystemTask::processorPingMessage()
{
    LOG_INFO("ConfigSystemTask", "Received Ping message from App Center");
    sendPingResponseToAppCenter();
}

void ConfigSystemTask::sendPingResponseToAppCenter()
{
    CodecMessage respMsg;
    respMsg.mMsgID = 1; // Ping response Msg ID
    respMsg.mMsgDataLength = 9; // 8 bytes device_id + 1 byte device_type
    
    memcpy(respMsg.mDataRaw, &gDeviceID, sizeof(gDeviceID));
    respMsg.mDataRaw[8] = MessageCommon::AquaControlDevice;
    
    uint8_t sendBuffer[12];
    sendBuffer[0] = respMsg.mMsgID;
    sendBuffer[1] = (respMsg.mMsgDataLength >> 8) & 0xFF;
    sendBuffer[2] = respMsg.mMsgDataLength & 0xFF;
    memcpy(&sendBuffer[3], respMsg.mDataRaw, respMsg.mMsgDataLength);
    
    if (mSockFd >= 0 && mRemoteAddr.sin_port != 0) {
        sendto(mSockFd, sendBuffer, respMsg.mMsgDataLength + 3, 0, (struct sockaddr *)&mRemoteAddr, sizeof(mRemoteAddr));
        LOG_INFO("ConfigSystemTask", "Sent Ping Response to App Center");
    }
}

void ConfigSystemTask::processorCommandSystemMessage(CodecMessage *msg)
{
    LOG_INFO("ConfigSystemTask", "Received Command: READ_CONFIG_SYSTEM");
    
    ConfigSystemMessage configMsg(gConfigSystem.getConfigSystem());
    CodecMessage respMsg;
    if (configMsg.packData(&respMsg)) {
        uint8_t sendBuffer[CodecMessage::MAX_DATA_LENGTH + 3];
        sendBuffer[0] = respMsg.mMsgID; // 2 (CONFIG_SYSTEM_MESSAGE)
        sendBuffer[1] = (respMsg.mMsgDataLength >> 8) & 0xFF;
        sendBuffer[2] = respMsg.mMsgDataLength & 0xFF;
        memcpy(&sendBuffer[3], respMsg.mDataRaw, respMsg.mMsgDataLength);
        
        if (mSockFd >= 0 && mRemoteAddr.sin_port != 0) {
            sendto(mSockFd, sendBuffer, respMsg.mMsgDataLength + 3, 0, (struct sockaddr *)&mRemoteAddr, sizeof(mRemoteAddr));
            LOG_INFO("ConfigSystemTask", "Sent ConfigSystemMessage response to App Center");
        }
    } else {
        LOG_ERROR("ConfigSystemTask", "Failed to pack ConfigSystemMessage");
    }
}

void ConfigSystemTask::processorConfigSystemMessage(CodecMessage *msg)
{
    LOG_INFO("ConfigSystemTask", "Received CONFIG_SYSTEM_MESSAGE to write new config");
    ConfigSystemMessage newConfigMsg;
    if (newConfigMsg.unpackData(msg)) {
        // Cập nhật cấu hình toàn cục
        gConfigSystem.setConfigSyste(newConfigMsg.getConfigSystem());
        
        // Lưu cấu hình vào Flash NVS thông qua StoreFlashManager
        bool success = StoreFlashManager::getInstance()->saveConfigToFlash(gConfigSystem);
        if (success) {
            LOG_INFO("ConfigSystemTask", "Config saved to flash successfully!");
            
            // Phản hồi xác nhận thành công về cho App bằng bản tin ping response
            sendPingResponseToAppCenter();
            
            // Trì hoãn 500ms để đảm bảo gói tin UDP phản hồi đã được truyền đi
            vTaskDelay(pdMS_TO_TICKS(500));
            
            // Restart hệ thống để áp dụng cấu hình Wifi/MQTT mới
            LOG_INFO("ConfigSystemTask", "Restarting device to apply new configuration...");
            esp_restart();
        } else {
            LOG_ERROR("ConfigSystemTask", "Failed to save configuration to flash!");
        }
    } else {
        LOG_ERROR("ConfigSystemTask", "Failed to unpack CONFIG_SYSTEM_MESSAGE");
    }
}
