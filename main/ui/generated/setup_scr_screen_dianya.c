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



void setup_scr_screen_dianya(lv_ui *ui)
{
    //Write codes screen_dianya
    ui->screen_dianya = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_dianya, 480, 480);
    lv_obj_set_scrollbar_mode(ui->screen_dianya, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_dianya, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianya_img_1
    ui->screen_dianya_img_1 = lv_image_create(ui->screen_dianya);
    lv_obj_set_pos(ui->screen_dianya_img_1, 0, -1);
    lv_obj_set_size(ui->screen_dianya_img_1, 480, 480);
    lv_obj_add_flag(ui->screen_dianya_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_dianya_img_1, &_fengmian_RGB565A8_480x480);
    lv_image_set_pivot(ui->screen_dianya_img_1, 50,50);
    lv_image_set_rotation(ui->screen_dianya_img_1, 0);

    //Write style for screen_dianya_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_dianya_img_1, 168, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->screen_dianya_img_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_dianya_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianya_label_dianyaA
    ui->screen_dianya_label_dianyaA = lv_label_create(ui->screen_dianya);
    lv_obj_set_pos(ui->screen_dianya_label_dianyaA, 62, 147);
    lv_obj_set_size(ui->screen_dianya_label_dianyaA, 99, 37);
    lv_label_set_text(ui->screen_dianya_label_dianyaA, "A相电压\n（红色）");
    lv_label_set_long_mode(ui->screen_dianya_label_dianyaA, LV_LABEL_LONG_WRAP);

    //Write style for screen_dianya_label_dianyaA, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianya_label_dianyaA, lv_color_hex(0xff002d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianya_label_dianyaA, &lv_font_ZiTiQuanWeiJunHeiW22_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianya_label_dianyaA, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianya_label_dianyaA, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianya_label_dianyaA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianya_label_dianyaB
    ui->screen_dianya_label_dianyaB = lv_label_create(ui->screen_dianya);
    lv_obj_set_pos(ui->screen_dianya_label_dianyaB, 62, 219);
    lv_obj_set_size(ui->screen_dianya_label_dianyaB, 100, 37);
    lv_label_set_text(ui->screen_dianya_label_dianyaB, "B相电压\n（绿色）");
    lv_label_set_long_mode(ui->screen_dianya_label_dianyaB, LV_LABEL_LONG_WRAP);

    //Write style for screen_dianya_label_dianyaB, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianya_label_dianyaB, lv_color_hex(0x2FDA64), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianya_label_dianyaB, &lv_font_ZiTiQuanWeiJunHeiW22_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianya_label_dianyaB, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianya_label_dianyaB, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianya_label_dianyaB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianya_label_dianyaC
    ui->screen_dianya_label_dianyaC = lv_label_create(ui->screen_dianya);
    lv_obj_set_pos(ui->screen_dianya_label_dianyaC, 62, 290);
    lv_obj_set_size(ui->screen_dianya_label_dianyaC, 100, 37);
    lv_label_set_text(ui->screen_dianya_label_dianyaC, "C相电压\n（蓝色）");
    lv_label_set_long_mode(ui->screen_dianya_label_dianyaC, LV_LABEL_LONG_WRAP);

    //Write style for screen_dianya_label_dianyaC, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianya_label_dianyaC, lv_color_hex(0x2FCADA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianya_label_dianyaC, &lv_font_ZiTiQuanWeiJunHeiW22_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianya_label_dianyaC, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianya_label_dianyaC, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianya_label_dianyaC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianya_label_dianya
    ui->screen_dianya_label_dianya = lv_label_create(ui->screen_dianya);
    lv_obj_set_pos(ui->screen_dianya_label_dianya, 262, 59);
    lv_obj_set_size(ui->screen_dianya_label_dianya, 100, 32);
    lv_label_set_text(ui->screen_dianya_label_dianya, "三相电压\n");
    lv_label_set_long_mode(ui->screen_dianya_label_dianya, LV_LABEL_LONG_WRAP);

    //Write style for screen_dianya_label_dianya, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianya_label_dianya, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianya_label_dianya, &lv_font_ZiTiQuanWeiJunHeiW22_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianya_label_dianya, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianya_label_dianya, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianya_label_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianya_chart_dianya
    ui->screen_dianya_chart_dianya = lv_chart_create(ui->screen_dianya);
    lv_obj_set_pos(ui->screen_dianya_chart_dianya, 227, 147);
    lv_obj_set_size(ui->screen_dianya_chart_dianya, 238, 193);
    lv_obj_set_scrollbar_mode(ui->screen_dianya_chart_dianya, LV_SCROLLBAR_MODE_OFF);
    lv_chart_set_type(ui->screen_dianya_chart_dianya, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_dianya_chart_dianya, 10, 10);
    lv_chart_set_point_count(ui->screen_dianya_chart_dianya, 5);
    lv_chart_set_range(ui->screen_dianya_chart_dianya, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_range(ui->screen_dianya_chart_dianya, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    ui->screen_dianya_chart_dianya_0 = lv_chart_add_series(ui->screen_dianya_chart_dianya, lv_color_hex(0xff002d), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_0, 1);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_0, 20);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_0, 2);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_0, 23);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_0, 5);
#endif
    ui->screen_dianya_chart_dianya_1 = lv_chart_add_series(ui->screen_dianya_chart_dianya, lv_color_hex(0x2FDA64), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_1, 12);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_1, 2);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_1, 16);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_1, 88);
#endif
    ui->screen_dianya_chart_dianya_2 = lv_chart_add_series(ui->screen_dianya_chart_dianya, lv_color_hex(0x2FCADA), LV_CHART_AXIS_SECONDARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_2, 32);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_2, 35);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_2, 40);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_2, 77);
    lv_chart_set_next_value(ui->screen_dianya_chart_dianya, ui->screen_dianya_chart_dianya_2, 42);
#endif

    //Write style for screen_dianya_chart_dianya, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_dianya_chart_dianya, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_dianya_chart_dianya, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_dianya_chart_dianya, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_dianya_chart_dianya, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_dianya_chart_dianya, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_dianya_chart_dianya, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_dianya_chart_dianya, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianya_chart_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_dianya_chart_dianya, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_dianya_chart_dianya, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_dianya_chart_dianya, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianya_chart_dianya, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianya_btn_1
    ui->screen_dianya_btn_1 = lv_button_create(ui->screen_dianya);
    lv_obj_set_pos(ui->screen_dianya_btn_1, 70, 59);
    lv_obj_set_size(ui->screen_dianya_btn_1, 88, 38);
    ui->screen_dianya_btn_1_label = lv_label_create(ui->screen_dianya_btn_1);
    lv_label_set_text(ui->screen_dianya_btn_1_label, "Back\n");
    lv_label_set_long_mode(ui->screen_dianya_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_dianya_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_dianya_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_dianya_btn_1_label, LV_PCT(100));

    //Write style for screen_dianya_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_dianya_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_dianya_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_dianya_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_dianya_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianya_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianya_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianya_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianya_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianya_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianya_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_dianya.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_dianya);

    //Init events for screen.
    events_init_screen_dianya(ui);
}
