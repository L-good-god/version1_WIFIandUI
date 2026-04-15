#include <stdio.h>
#include "freertos/FreeRTOS.h"      // FreeRTOS核心功能
#include "freertos/task.h"          // 任务管理
#include "freertos/event_groups.h"  // 事件组（用于任务间同步）
#include "esp_wifi.h"               // ESP32 WiFi驱动
#include "esp_event.h"              // 事件循环
#include "esp_log.h"                // 日志输出
#include "esp_netif.h"              // 网络接口
#include "nvs_flash.h"              // 非易失性存储（保存WiFi配置）
#include "freertos/semphr.h"        // 信号量（任务同步）

#define WIFI_SSID      "ESPRedmi"        // WiFi名称
#define WIFI_PASSWORD  "123456789"   // WiFi密码

static const char *TAG = "WiFi";  

static SemaphoreHandle_t s_wifi_connect_semaphore = NULL; // 信号量

// WiFi事件处理函数
void wifi_event(void *arg, esp_event_base_t event_base,int32_t event_id, void *event_data) {
    if (event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_START) {
        esp_wifi_connect();
    }
    else if (event_base == IP_EVENT && event_id == IP_EVENT_STA_GOT_IP) {
        ip_event_got_ip_t* event = (ip_event_got_ip_t *)event_data;
        
        // 获取IP地址信息
        esp_ip4_addr_t ip = event->ip_info.ip;
        esp_ip4_addr_t gateway = event->ip_info.gw;
        esp_ip4_addr_t netmask = event->ip_info.netmask;
        
        // 打印IP地址信息
        ESP_LOGI(TAG, "Got IP Address:");
        ESP_LOGI(TAG, "IP:      " IPSTR, IP2STR(&ip));
        ESP_LOGI(TAG, "Gateway: " IPSTR, IP2STR(&gateway));
        ESP_LOGI(TAG, "Netmask: " IPSTR, IP2STR(&netmask));
        printf("get ip success\n");
        xSemaphoreGive(s_wifi_connect_semaphore); // 连接成功，释放信号量
    }
    
}

void wifi_init(void) {
    //初始化
    nvs_flash_init();                    // 初始化NVS
    esp_netif_init();                    // 初始化TCP/IP栈
    esp_event_loop_create_default();     // 创建默认事件循环
    esp_netif_create_default_wifi_sta(); // 创建默认STA网络接口

    s_wifi_connect_semaphore = xSemaphoreCreateBinary(); // 创建信号量

    //注册事件回调
    esp_event_handler_instance_t wifi_event_handler;
    esp_event_handler_instance_register(
            WIFI_EVENT,                               // 监听WiFi事件
            ESP_EVENT_ANY_ID,                         // 任何子事件
            wifi_event,                               // 回调函数
            NULL,                                     // 无参数传递
            &wifi_event_handler);

    //注册事件回调
    esp_event_handler_instance_t ip_event_handler;
    esp_event_handler_instance_register(
            IP_EVENT,                                 // 监听IP事件
            IP_EVENT_STA_GOT_IP,                      // 仅处理获取IP事件
            wifi_event,                               // 回调函数
            NULL,                                     // 无参数传递
            &ip_event_handler);

    // WiFi驱动初始化
    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT(); // 默认配置
    esp_wifi_init(&cfg);             // 初始化WiFi驱动

    esp_wifi_set_mode(WIFI_MODE_STA);// 设为STA模式

    wifi_config_t wifi_config = {
        .sta = {
            .ssid = WIFI_SSID,                       // SSID
            .password = WIFI_PASSWORD,               // 密码
        },
    };
    esp_wifi_set_config(ESP_IF_WIFI_STA, &wifi_config);// 应用配置

    esp_wifi_start();
    xSemaphoreTake(s_wifi_connect_semaphore, portMAX_DELAY); // 等待连接成功
}