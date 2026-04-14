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
#include "lv_demos.h"
#include "ui/generated/gui_guider.h"

lv_ui guider_ui;

void app_main(void)
{
    bsp_display_start();

    bsp_display_lock(0);

    // 初始化UI
    setup_ui(&guider_ui);
    
    bsp_display_unlock();
}