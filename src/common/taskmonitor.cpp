#include "taskmonitor.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_heap_caps.h"

static const char *TAG = "TASK_MONITOR";

static void task_monitor_fn(void *pvParameters)
{
    (void)pvParameters;
    vTaskDelay(pdMS_TO_TICKS(5000)); // Chờ hệ thống ổn định

    while (true) {
        UBaseType_t uxArraySize = uxTaskGetNumberOfTasks();
        TaskStatus_t *pxTaskStatusArray = (TaskStatus_t *)pvPortMalloc(uxArraySize * sizeof(TaskStatus_t));

        if (pxTaskStatusArray != NULL) {
            // Lấy thông tin chi tiết của tất cả các task
            uxArraySize = uxTaskGetSystemState(pxTaskStatusArray, uxArraySize, NULL);

            ESP_LOGI(TAG, "==================== TASK MONITOR SYSTEM ====================");
            ESP_LOGI(TAG, "%-20s %-10s %-10s %-15s", "Task Name", "State", "Priority", "Stack High Water");
            
            for (UBaseType_t i = 0; i < uxArraySize; i++) {
                const char *state_str = "Unknown";
                switch (pxTaskStatusArray[i].eCurrentState) {
                    case eRunning:   state_str = "Running";   break;
                    case eReady:     state_str = "Ready";     break;
                    case eBlocked:   state_str = "Blocked";   break;
                    case eSuspended: state_str = "Suspended"; break;
                    case eDeleted:   state_str = "Deleted";   break;
                    default:         break;
                }
                ESP_LOGI(TAG, "%-20s %-10s %-10d %-15u", 
                         pxTaskStatusArray[i].pcTaskName, 
                         state_str, 
                         (int)pxTaskStatusArray[i].uxCurrentPriority, 
                         (unsigned int)pxTaskStatusArray[i].usStackHighWaterMark);
            }
            vPortFree(pxTaskStatusArray);
        } else {
            ESP_LOGE(TAG, "Failed to allocate memory for task stats array!");
        }

        // In trạng thái heap
        ESP_LOGI(TAG, "Free Heap: %u bytes, Min Free Heap: %u bytes", 
                 (unsigned int)esp_get_free_heap_size(), 
                 (unsigned int)esp_get_minimum_free_heap_size());
        ESP_LOGI(TAG, "=============================================================");

        vTaskDelay(pdMS_TO_TICKS(10000)); // Lặp lại mỗi 10 giây
    }
}

void start_task_monitor(void)
{
    xTaskCreatePinnedToCore(task_monitor_fn, "TaskMonitor", 4096, NULL, 1, NULL, 1);
}
