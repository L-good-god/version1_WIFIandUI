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
#include "MQTT/mqtt.h"

lv_ui guider_ui;

// MQTT初始化任务
void mqtt_init_task(void *pvParameters)
{
    mqtt_start();
    vTaskDelete(NULL);
}

// WiFi初始化任务
void wifi_init_task(void *pvParameters)
{
    wifi_init();
    // WiFi连接成功后，创建MQTT初始化任务
    xTaskCreate(mqtt_init_task, "mqtt_init_task", 4096, NULL, 4, NULL);
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

    int count = 0;
    while(1)
    {
        char count_str[32];
        snprintf(count_str,sizeof(count_str),"{\"count\":%d}",count);
        esp_mqtt_client_publish(mqtt_handle,MQTT_TOPIC1,count_str,strlen(count_str),1,0);
        count++;
        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}