#include "stdio.h"
#include "mqtt_client.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"      // FreeRTOS核心功能
#include "freertos/task.h"          // 任务管理
#include "freertos/event_groups.h"  // 事件组（用于任务间同步）
#include "esp_event.h"              // 事件循环
#include "freertos/semphr.h"
#include "rec.h"

#define MQTT_ADDRESS  "mqtt://broker.emqx.io"
#define MQTT_CLIENTID "mqttx_7e0c8373"
#define MQTT_USERNAME "lgod"
#define MQTT_PASSWORD "88888888"

#define MQTT_TOPIC1 "/topic/esp32_0823"               //mqttx往这个主题推送消息
#define MQTT_TOPIC2 "/topic/mqttx_0823"               //ESP32往这个主题推送消息

#define TAG      "mqtt"

esp_mqtt_client_handle_t mqtt_handle = NULL;
SemaphoreHandle_t mqtt_mutex = NULL;  

void mqtt_event_callback(void *event_handler_args,esp_event_base_t event_base, int32_t event_id, void *event_data){
    
    esp_mqtt_event_handle_t data = (esp_mqtt_event_handle_t)event_data;
    if (xSemaphoreTake(mqtt_mutex, portMAX_DELAY) == pdTRUE) {
        switch (event_id) {
            case MQTT_EVENT_CONNECTED:
                ESP_LOGI(TAG, "MQTT connected");
                esp_mqtt_client_subscribe_single(mqtt_handle, MQTT_TOPIC2, 1);
                break;
        
            case MQTT_EVENT_DISCONNECTED:
                ESP_LOGI(TAG, "MQTT disconnected");
                break;

            case MQTT_EVENT_PUBLISHED:
                ESP_LOGI(TAG, "MQTT published ack");
                break;
            
            case MQTT_EVENT_SUBSCRIBED:
                ESP_LOGI(TAG, "MQTT subscribed ack");
                break;

            case MQTT_EVENT_DATA:
                ESP_LOGI(TAG, "MQTT data arrived");
                ESP_LOGI(TAG, "TOPIC->%s",data->topic);
                ESP_LOGI(TAG, "DATA LENGTH->%d", data->data_len);
                receive(data->data);
                break;

            default:
                break;
        }
        xSemaphoreGive(mqtt_mutex);
    }
}
void mqtt_start(void){
    printf("mqtt_start\n");
    
    // 创建互斥信号量
    mqtt_mutex = xSemaphoreCreateMutex();
    if(mqtt_mutex == NULL){
        ESP_LOGE(TAG, "Failed to create mutex");
        return;
    }

    esp_mqtt_client_config_t mqtt_cfg = {0};
    mqtt_cfg.broker.address.uri = MQTT_ADDRESS;
    mqtt_cfg.broker.address.port = 1883;
    mqtt_cfg.credentials.client_id = MQTT_CLIENTID;
    mqtt_cfg.credentials.username = MQTT_USERNAME;
    mqtt_cfg.credentials.authentication.password = MQTT_PASSWORD;
    mqtt_cfg.buffer.size = 4096;
    mqtt_handle = esp_mqtt_client_init(&mqtt_cfg);

    esp_mqtt_client_register_event(mqtt_handle,ESP_EVENT_ANY_ID,mqtt_event_callback,NULL);
    
    esp_mqtt_client_start(mqtt_handle);

}