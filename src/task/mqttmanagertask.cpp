#include "task/mqttmanagertask.h"
#include "HAL/HAL_ESP32/mqttclientesp32.h"
#include "common/common.h"
#include "loggermanager.h"
#include "message/controlstatusdatamessage.h"
#include "message/controlrelaymessage.h"
#include "codec/codecmessage.h"
#include "task/espnowreceivertask.h"
#include "message/monitordatamessage.h"

MqttManagerTask::MqttManagerTask(std::string nameTask, int numElementQueueSet)
    : TaskAbstract(nameTask, numElementQueueSet)
{
}

MqttManagerTask::~MqttManagerTask()
{
    // Không delete mMqttClient vì MqttClientAbstract không có virtual destructor
    // và Task này chạy vô hạn, không bao giờ bị destroy trong suốt vòng đời Firmware.
}

void MqttManagerTask::onInitProcess()
{
    LOG_INFO("MqttManagerTask", "Initializing MqttManagerTask...");
    
    // Format topics using Device ID
    char devIdStr[32];
    snprintf(devIdStr, sizeof(devIdStr), "%llu", (unsigned long long)gDeviceID);
    
    mTopicTelemetry = std::string("devices/") + devIdStr + "/telemetry";
    mTopicCommand = std::string("devices/") + devIdStr + "/commands";

    initMqttClient();
}

void MqttManagerTask::initMqttClient()
{
    const auto &config = gConfigSystem.getConfigSystem();
    
    // Check if URI is configured
    if (strlen(config.uriMqtt) == 0) {
        LOG_INFO("MqttManagerTask", "MQTT Broker URI is empty, skipping MQTT initialization");
        return;
    }

    std::string brokerUri = config.uriMqtt;
    int port = config.portMqtt;
    if (port == 0) port = 1883; // default port
    
    std::string username = config.mqttUser;
    std::string password = config.mqttPass;

    mMqttClient = new MqttClientEsp32(brokerUri, port, username, password);

    mMqttClient->setReceivedMessageCallback(std::bind(&MqttManagerTask::onMessageReceived, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
    mMqttClient->setSubcribeToppicCallback(std::bind(&MqttManagerTask::onSubscribeTopic, this));
}

void MqttManagerTask::onTimer100HzProcess()
{
    mCounter100Hz++;

    // Check Network state using EventGroup
    EventBits_t networkBits = xEventGroupGetBits(gEventGroupNetworkState);
    bool wifiConnected = (networkBits & BIT_WIFI_CONNECTED) != 0;

    if (wifiConnected && !mIsWifiConnected) {
        mIsWifiConnected = true;
        if (mMqttClient) {
            LOG_INFO("MqttManagerTask", "Wifi connected, starting MQTT client...");
            mMqttClient->start();
        }
    } else if (!wifiConnected && mIsWifiConnected) {
        mIsWifiConnected = false;
        if (mMqttClient) {
            LOG_INFO("MqttManagerTask", "Wifi disconnected, stopping MQTT client...");
            mMqttClient->stop();
        }
    }

    // --- Quét Mảng Atomic (Remote Monitors) ---
    // Kiểm tra định kỳ 100Hz, áp dụng cooldown 200ms (20 ticks) giữa các lần Publish
    static int monitor_check_index = 0;
    static int publish_cooldown = 0;

    if (publish_cooldown > 0) {
        publish_cooldown--;
    } else {
        if (mMqttClient && mMqttClient->isMqttConnected()) {
            // Quét qua 10 monitor để tìm monitor có dữ liệu mới
            for (int i = 0; i < 10; i++) {
                int idx = (monitor_check_index + i) % 10;
                
                // Sử dụng .load() lock-free để kiểm tra cờ
                if (gSharedData.remote_monitors[idx].has_new_data.load(std::memory_order_relaxed)) {
                    // Hạ cờ (đã đọc)
                    gSharedData.remote_monitors[idx].has_new_data.store(false, std::memory_order_relaxed);
                    
                    // Map to Protobuf struct
                    AquaCtrl_MonitorData monitorData = AquaCtrl_MonitorData_init_zero;
                    monitorData.deviceId = idx;
                    monitorData.AmpeChannel1x100 = (uint32_t)(gSharedData.remote_monitors[idx].ampe_ch1.load(std::memory_order_relaxed) * 100.0f);
                    monitorData.Oxyx100 = (uint32_t)(gSharedData.remote_monitors[idx].oxy.load(std::memory_order_relaxed) * 100.0f);
                    monitorData.pHx100 = (uint32_t)(gSharedData.remote_monitors[idx].pH.load(std::memory_order_relaxed) * 100.0f);
                    monitorData.Voltagex100 = (uint32_t)(gSharedData.remote_monitors[idx].voltage.load(std::memory_order_relaxed) * 100.0f);
                    monitorData.Temperaturex100 = (uint32_t)(gSharedData.remote_monitors[idx].temperature.load(std::memory_order_relaxed) * 100.0f);

                    MonitorDataMessage msg(monitorData);
                    CodecMessage codecMsg;
                    if (msg.packData(&codecMsg)) {
                        char devIdStr[32];
                        snprintf(devIdStr, sizeof(devIdStr), "%llu", (unsigned long long)gDeviceID);
                        std::string topicMonitor = std::string("devices/") + devIdStr + "/telemetry/monitor";

                        uint16_t totalLen = codecMsg.mMsgDataLength; 
                        mMqttClient->publish(topicMonitor, (const char*)codecMsg.mDataRaw, totalLen, MqttClientAbstract::QOS_1);
                    } else {
                        LOG_ERROR("MqttManagerTask", "Failed to pack MonitorData");
                    }
                    
                    // Set cooldown 20 ticks (200ms) để chống spam MQTT Broker
                    publish_cooldown = 20;
                    monitor_check_index = idx + 1; // Lần sau sẽ quét tiếp từ monitor tiếp theo
                    break; // Chỉ publish 1 monitor trong mỗi lượt để giãn cách
                }
            }
        }
    }
}

void MqttManagerTask::onQueueSetMessageProcess(OSBase::QueueHandle queue_sem)
{
    // Check if data available in Telemetry queue
    if (queue_sem == gQueuePowerDataToMqtt) {
        ControlStatusDataMessage msg;
        if (mOSBase->queueReceive(gQueuePowerDataToMqtt, &msg, 0) == OSBase::QUEUE_OK) {
            if (mMqttClient && mMqttClient->isMqttConnected()) {
                CodecMessage codecMsg;
                if (msg.packData(&codecMsg)) {
                    // Publish raw bytes over MQTT
                    uint16_t totalLen = codecMsg.mMsgDataLength; 
                    mMqttClient->publish(mTopicTelemetry, (const char*)codecMsg.mDataRaw, totalLen, MqttClientAbstract::QOS_1);
                    // LOG_DEBUG("MqttManagerTask", "Published telemetry to topic: %s", mTopicTelemetry.c_str());
                } else {
                    LOG_ERROR("MqttManagerTask", "Failed to pack telemetry data");
                }
            }
        }
    }
}

void MqttManagerTask::onSubscribeTopic()
{
    LOG_INFO("MqttManagerTask", "MQTT Connected! Subscribing to topic: %s", mTopicCommand.c_str());
    if (mMqttClient) {
        mMqttClient->subscribe(mTopicCommand, MqttClientAbstract::QOS_1);
    }
}

void MqttManagerTask::onMessageReceived(const std::string &topic, const char *data, const uint16_t &len)
{
    LOG_INFO("MqttManagerTask", "Received MQTT message on topic: %s, length: %d", topic.c_str(), len);
    
    if (topic == mTopicCommand) {
        // Parse the incoming Protobuf data into a ControlRelayMessage
        CodecMessage codecMsg;
        if (len <= CodecMessage::MAX_DATA_LENGTH) {
            codecMsg.mMsgID = static_cast<int>(AbstractMessage::MessageId::CONTROL_RELAY_MESSAGE);
            codecMsg.mMsgDataLength = len;
            memcpy(codecMsg.mDataRaw, data, len);

            ControlRelayMessage relayMsg;
            if (relayMsg.unpackData(&codecMsg)) {
                // Successfully parsed, send it to gQueueRelayControlCmd
                if (mOSBase->queueSend(gQueueRelayControlCmd, &relayMsg) != OSBase::QUEUE_OK) {
                    LOG_ERROR("MqttManagerTask", "Failed to send to gQueueRelayControlCmd, queue might be full!");
                } else {
                    LOG_INFO("MqttManagerTask", "Command successfully sent to RelayManagerTask");
                }
            } else {
                LOG_ERROR("MqttManagerTask", "Failed to unpack ControlRelayMessage from MQTT payload");
            }
        } else {
            LOG_ERROR("MqttManagerTask", "MQTT message length exceeds MAX_DATA_LENGTH");
        }
    }
}
