/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"


typedef struct
{
  
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_img_1;
	lv_obj_t *screen_btn_1;
	lv_obj_t *screen_btn_1_label;
	lv_obj_t *screen_btn_2;
	lv_obj_t *screen_btn_2_label;
	lv_obj_t *screen_btn_3;
	lv_obj_t *screen_btn_3_label;
	lv_obj_t *screen_btn_4;
	lv_obj_t *screen_btn_4_label;
	lv_obj_t *screen_btn_dianliu;
	lv_obj_t *screen_btn_dianliu_label;
	lv_obj_t *screen_btn_6;
	lv_obj_t *screen_btn_6_label;
	lv_obj_t *screen_sw_1;
	lv_obj_t *screen_sw_2;
	lv_obj_t *screen_sw_3;
	lv_obj_t *screen_sw_4;
	lv_obj_t *screen_label_1;
	lv_obj_t *screen_label_2;
	lv_obj_t *screen_label_3;
	lv_obj_t *screen_label_4;
	lv_obj_t *screen_img_2;
	lv_obj_t *screen_dianliu;
	bool screen_dianliu_del;
	lv_obj_t *screen_dianliu_img_1;
	lv_obj_t *screen_dianliu_label_dianliuA;
	lv_obj_t *screen_dianliu_label_dianliuB;
	lv_obj_t *screen_dianliu_lalabel_dianliuC;
	lv_obj_t *screen_dianliu_label_dianliu;
	lv_obj_t *screen_dianliu_chart_1;
	lv_chart_series_t *screen_dianliu_chart_1_0;
	lv_chart_series_t *screen_dianliu_chart_1_1;
	lv_chart_series_t *screen_dianliu_chart_1_2;
	lv_obj_t *screen_dianliu_btn_1;
	lv_obj_t *screen_dianliu_btn_1_label;
	lv_obj_t *screen_dianya;
	bool screen_dianya_del;
	lv_obj_t *screen_dianya_img_1;
	lv_obj_t *screen_dianya_label_dianyaA;
	lv_obj_t *screen_dianya_label_dianyaB;
	lv_obj_t *screen_dianya_label_dianyaC;
	lv_obj_t *screen_dianya_label_dianya;
	lv_obj_t *screen_dianya_chart_dianya;
	lv_chart_series_t *screen_dianya_chart_dianya_0;
	lv_chart_series_t *screen_dianya_chart_dianya_1;
	lv_chart_series_t *screen_dianya_chart_dianya_2;
	lv_obj_t *screen_dianya_btn_1;
	lv_obj_t *screen_dianya_btn_1_label;
	lv_obj_t *screen_gonglv;
	bool screen_gonglv_del;
	lv_obj_t *screen_gonglv_img_1;
	lv_obj_t *screen_gonglv_label_dianya;
	lv_obj_t *screen_gonglv_chart_gonglv;
	lv_chart_series_t *screen_gonglv_chart_gonglv_0;
	lv_obj_t *screen_gonglv_btn_1;
	lv_obj_t *screen_gonglv_btn_1_label;
	lv_obj_t *screen_gonglv_label_1;
	lv_obj_t *screen_gonglvyinsu;
	bool screen_gonglvyinsu_del;
	lv_obj_t *screen_gonglvyinsu_img_1;
	lv_obj_t *screen_gonglvyinsu_label_dianya;
	lv_obj_t *screen_gonglvyinsu_chart_gonglv;
	lv_chart_series_t *screen_gonglvyinsu_chart_gonglv_0;
	lv_obj_t *screen_gonglvyinsu_btn_1;
	lv_obj_t *screen_gonglvyinsu_btn_1_label;
	lv_obj_t *screen_gonglvyinsu_label_1;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_screen_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, uint32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                  uint32_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                  lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_completed_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_bottom_layer(void);

void setup_ui(lv_ui *ui);

void video_play(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_screen(lv_ui *ui);
void setup_scr_screen_dianliu(lv_ui *ui);
void setup_scr_screen_dianya(lv_ui *ui);
void setup_scr_screen_gonglv(lv_ui *ui);
void setup_scr_screen_gonglvyinsu(lv_ui *ui);
LV_IMAGE_DECLARE(_fengmian_RGB565A8_480x480);
LV_IMAGE_DECLARE(_biao_RGB565A8_134x141);

LV_FONT_DECLARE(lv_font_ZiTiQuanWeiJunHeiW22_16)
LV_FONT_DECLARE(lv_font_ZiTiQuanWeiJunHeiW22_19)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_ZiTiQuanWeiJunHeiW22_26)


#ifdef __cplusplus
}
#endif
#endif
