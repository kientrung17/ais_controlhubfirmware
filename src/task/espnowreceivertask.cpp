#include "task/espnowreceivertask.h"
#include "common/common.h"
#include "loggermanager.h"
#include "esp_wifi.h"
#include "esp_now.h"

EspNowReceiverTask::EspNowReceiverTask(std::string nameTask, int numElementQueueSet)
    : TaskAbstract(nameTask, numElementQueueSet)
{
}

EspNowReceiverTask::~EspNowReceiverTask()
{
    esp_now_deinit();
}

// =========================================================
// onInitProcess: Khởi tạo ESP-NOW và đăng ký callback
// Được gọi một lần duy nhất khi task bắt đầu chạy
// =========================================================
void EspNowReceiverTask::onInitProcess()
{
    LOG_INFO("EspNowReceiverTask", "Initializing ESP-NOW receiver...");

    // Chờ cho đến khi Wi-Fi stack được khởi tạo và chạy thành công bởi WifiManagerTask
    wifi_mode_t mode;
    while (esp_wifi_get_mode(&mode) != ESP_OK) {
        LOG_INFO("EspNowReceiverTask", "Waiting for Wi-Fi stack to be initialized...");
        vTaskDelay(pdMS_TO_TICKS(500));
    }

    // Bước 1: ESP-NOW bắt buộc phải chạy sau khi WiFi đã được khởi tạo
    esp_err_t err = esp_now_init();
    if (err != ESP_OK) {
        LOG_ERROR("EspNowReceiverTask", "esp_now_init() failed: 0x%x", err);
        return;
    }

    // Bước 2: Đăng ký hàm callback nhận gói tin
    // Callback sẽ được gọi từ Wi-Fi task nội bộ của ESP-IDF (ISR-like context)
    // => Tuyệt đối không allocate heap, không delay, không dùng Queue blocking
    err = esp_now_register_recv_cb(EspNowReceiverTask::onDataReceive);
    if (err != ESP_OK) {
        LOG_ERROR("EspNowReceiverTask", "esp_now_register_recv_cb() failed: 0x%x", err);
        return;
    }

    LOG_INFO("EspNowReceiverTask", "ESP-NOW receiver ready. Listening for deviceId=%d",
             MONITOR_DEVICE_ID);
}

// =========================================================
// onTimer100HzProcess: Task này không cần timer loop
// Toàn bộ logic xử lý nằm trong callback onDataReceive
// =========================================================
void EspNowReceiverTask::onTimer100HzProcess()
{
    // ESP-NOW dùng callback, không cần polling trong vòng lặp timer
}

// =========================================================
// onQueueSetMessageProcess: Task này không đăng ký Queue nào
// =========================================================
void EspNowReceiverTask::onQueueSetMessageProcess(OSBase::QueueHandle /*queue_sem*/)
{
    // Không có Queue nào được đăng ký
}

// =========================================================
// onDataReceive [STATIC CALLBACK]
//
// Ràng buộc kỹ thuật (QUAN TRỌNG):
//   - Hàm này chạy trong Wi-Fi interrupt context của ESP-IDF
//   - TUYỆT ĐỐI KHÔNG dùng: Queue, vTaskDelay, malloc, new
//   - CHỈ được dùng: std::atomic::store() (Lock-free, ISR-safe)
// =========================================================
void EspNowReceiverTask::onDataReceive(const esp_now_recv_info_t *recvInfo,
                                       const uint8_t *data,
                                       int len)
{
    // Kiểm tra kích thước gói tin hợp lệ
    if (len != sizeof(EspNowMonitorPayload)) {
        LOG_ERROR("EspNowReceiverTask", "Invalid payload size: got %d, expected %d",
                 len, (int)sizeof(EspNowMonitorPayload));
        return;
    }

    // Ép kiểu an toàn từ raw bytes sang struct
    EspNowMonitorPayload payload;
    memcpy(&payload, data, sizeof(EspNowMonitorPayload));

    // Chỉ xử lý nếu deviceId nằm trong dải hợp lệ (0-9)
    if (payload.deviceId < 10) {
        // Ghi thẳng vào SharedDataStore (Lock-free, ISR-safe, zero latency)
        gSharedData.remote_monitors[payload.deviceId].ampe_ch1.store(payload.ampeChannel1, std::memory_order_relaxed);
        gSharedData.remote_monitors[payload.deviceId].oxy.store(payload.oxy, std::memory_order_relaxed);
        gSharedData.remote_monitors[payload.deviceId].pH.store(payload.pH, std::memory_order_relaxed);
        gSharedData.remote_monitors[payload.deviceId].voltage.store(payload.voltage, std::memory_order_relaxed);
        gSharedData.remote_monitors[payload.deviceId].temperature.store(payload.temperature, std::memory_order_relaxed);
        gSharedData.remote_monitors[payload.deviceId].is_power_lost_phare.store(payload.isPowerLostPhare, std::memory_order_relaxed);
        
        // Bật cờ báo có dữ liệu mới để MqttManagerTask quét
        gSharedData.remote_monitors[payload.deviceId].has_new_data.store(true, std::memory_order_release);
    }

    LOG_INFO("EspNowReceiverTask", "OK | deviceId=%d | I1=%.2f Oxy=%.2f pH=%.2f | Temp=%.2f°C | Volt=%.2fV | PhaseLostMask=%u",
              payload.deviceId, payload.ampeChannel1, payload.oxy, payload.pH, 
              payload.temperature, payload.voltage, payload.isPowerLostPhare);
}
