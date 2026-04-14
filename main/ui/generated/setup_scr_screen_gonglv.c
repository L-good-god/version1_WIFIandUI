/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_gonglv(lv_ui *ui)
{
    //Write codes screen_gonglv
    ui->screen_gonglv = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_gonglv, 480, 480);
    lv_obj_set_scrollbar_mode(ui->screen_gonglv, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_gonglv, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_gonglv, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_gonglv_img_1
    ui->screen_gonglv_img_1 = lv_image_create(ui->screen_gonglv);
    lv_obj_set_pos(ui->screen_gonglv_img_1, 0, -1);
    lv_obj_set_size(ui->screen_gonglv_img_1, 480, 480);
    lv_obj_add_flag(ui->screen_gonglv_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_gonglv_img_1, &_fengmian_RGB565A8_480x480);
    lv_image_set_pivot(ui->screen_gonglv_img_1, 50,50);
    lv_image_set_rotation(ui->screen_gonglv_img_1, 0);

    //Write style for screen_gonglv_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_gonglv_img_1, 168, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->screen_gonglv_img_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_gonglv_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_gonglv_label_dianya
    ui->screen_gonglv_label_dianya = lv_label_create(ui->screen_gonglv);
    lv_obj_set_pos(ui->screen_gonglv_label_dianya, 261, 59);
    lv_obj_set_size(ui->screen_gonglv_label_dianya, 100, 32);
    lv_label_set_text(ui->screen_gonglv_label_dianya, "功率");
    lv_label_set_long_mode(ui->screen_gonglv_label_dianya, LV_LABEL_LONG_WRAP);

    //Write style for screen_gonglv_label_dianya, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_gonglv_label_dianya, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_gonglv_label_dianya, &lv_font_ZiTiQuanWeiJunHeiW22_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_gonglv_label_dianya, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_gonglv_label_dianya, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_gonglv_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_gonglv_chart_gonglv
    ui->screen_gonglv_chart_gonglv = lv_chart_create(ui->screen_gonglv);
    lv_obj_set_pos(ui->screen_gonglv_chart_gonglv, 227, 147);
    lv_obj_set_size(ui->screen_gonglv_chart_gonglv, 238, 193);
    lv_obj_set_scrollbar_mode(ui->screen_gonglv_chart_gonglv, LV_SCROLLBAR_MODE_OFF);
    lv_chart_set_type(ui->screen_gonglv_chart_gonglv, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_gonglv_chart_gonglv, 10, 10);
    lv_chart_set_point_count(ui->screen_gonglv_chart_gonglv, 5);
    lv_chart_set_range(ui->screen_gonglv_chart_gonglv, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_range(ui->screen_gonglv_chart_gonglv, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    ui->screen_gonglv_chart_gonglv_0 = lv_chart_add_series(ui->screen_gonglv_chart_gonglv, lv_color_hex(0xff002d), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_gonglv_chart_gonglv, ui->screen_gonglv_chart_gonglv_0, 1);
    lv_chart_set_next_value(ui->screen_gonglv_chart_gonglv, ui->screen_gonglv_chart_gonglv_0, 20);
    lv_chart_set_next_value(ui->screen_gonglv_chart_gonglv, ui->screen_gonglv_chart_gonglv_0, 5);
    lv_chart_set_next_value(ui->screen_gonglv_chart_gonglv, ui->screen_gonglv_chart_gonglv_0, 40);
    lv_chart_set_next_value(ui->screen_gonglv_chart_gonglv, ui->screen_gonglv_chart_gonglv_0, 5);
#endif

    //Write style for screen_gonglv_chart_gonglv, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_gonglv_chart_gonglv, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_gonglv_chart_gonglv, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_gonglv_chart_gonglv, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_gonglv_chart_gonglv, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_gonglv_chart_gonglv, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_gonglv_chart_gonglv, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_gonglv_chart_gonglv, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_gonglv_chart_gonglv, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_gonglv_chart_gonglv, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_gonglv_chart_gonglv, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_gonglv_chart_gonglv, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_gonglv_chart_gonglv, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_gonglv_btn_1
    ui->screen_gonglv_btn_1 = lv_button_create(ui->screen_gonglv);
    lv_obj_set_pos(ui->screen_gonglv_btn_1, 70, 59);
    lv_obj_set_size(ui->screen_gonglv_btn_1, 88, 38);
    ui->screen_gonglv_btn_1_label = lv_label_create(ui->screen_gonglv_btn_1);
    lv_label_set_text(ui->screen_gonglv_btn_1_label, "Back\n");
    lv_label_set_long_mode(ui->screen_gonglv_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_gonglv_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_gonglv_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_gonglv_btn_1_label, LV_PCT(100));

    //Write style for screen_gonglv_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_gonglv_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_gonglv_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_gonglv_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_gonglv_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_gonglv_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_gonglv_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_gonglv_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_gonglv_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_gonglv_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_gonglv_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_gonglv_label_1
    ui->screen_gonglv_label_1 = lv_label_create(ui->screen_gonglv);
    lv_obj_set_pos(ui->screen_gonglv_label_1, 52, 214);
    lv_obj_set_size(ui->screen_gonglv_label_1, 100, 32);
    lv_label_set_text(ui->screen_gonglv_label_1, "功率");
    lv_label_set_long_mode(ui->screen_gonglv_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_gonglv_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_gonglv_label_1, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_gonglv_label_1, &lv_font_ZiTiQuanWeiJunHeiW22_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_gonglv_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_gonglv_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_gonglv_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_gonglv.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_gonglv);

    //Init events for screen.
    events_init_screen_gonglv(ui);
}
