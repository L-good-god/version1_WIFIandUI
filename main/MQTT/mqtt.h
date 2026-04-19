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

#define MQTT_TOPIC1 "org/1/device/0001011dff0001a3/down"              //mqttx往这个主题推送消息 发布上行TOPIC
#define MQTT_TOPIC2 "org/1/project/1/device/0001011dff0001a3/dat/up"  //ESP32往这个主题推送消息 订阅下行TOPIC

#ifdef __cplusplus
}
#endif

#endif