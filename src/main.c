#include "MyMain.h"
#include "common/common.h"
#include "esp_log.h"
#include "esp_task_wdt.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


void app_main() {
  esp_log_level_set("*", ESP_LOG_DEBUG); // Hiện toàn bộ log DEBUG trở xuống
  // freertos
  startAllTask();
  vTaskDelay(pdMS_TO_TICKS(1000));
  
  // Start HeartbeatTask instead of using hardware timer (esp_timer)
  startHeartbeatTask();
  vTaskDelay(pdMS_TO_TICKS(100));
}