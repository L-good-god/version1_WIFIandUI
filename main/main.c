#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "nvs_flash.h"
#include "nvs.h"
#include "esp_log.h"
#include "esp_err.h"
#include "esp_check.h"
#include "esp_memory_utils.h"
#include "lvgl.h"
#include "bsp/esp-bsp.h"
#include "bsp/display.h"
#include "ui/generated/gui_guider.h"
#include "WIFI/wifi.h"

lv_ui guider_ui;

// WiFi初始化任务
void wifi_init_task(void *pvParameters)
{
    wifi_init();
    vTaskDelete(NULL);
}

void app_main(void)
{
    bsp_display_start();

    bsp_display_lock(0);

    // 初始化UI
    setup_ui(&guider_ui);
    
    bsp_display_unlock();
    
    // 创建WiFi初始化任务
    xTaskCreate(wifi_init_task, "wifi_init_task", 4096, NULL, 5, NULL);
}