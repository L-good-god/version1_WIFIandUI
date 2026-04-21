#ifndef __MQTT_H__
#define __MQTT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "mqtt_client.h" 
#include "freertos/semphr.h"

extern esp_mqtt_client_handle_t mqtt_handle;
extern SemaphoreHandle_t mqtt_mutex;

void mqtt_start(void);

#define MQTT_TOPIC1 "/topic/esp32_0420"               //esp32往这个主题推送消息
#define MQTT_TOPIC2 "/topic/mqttx_0420"               //mqttx往这个主题推送消息
#ifdef __cplusplus
}
#endif

#endif