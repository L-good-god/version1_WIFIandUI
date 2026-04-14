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



void setup_scr_screen_dianliu(lv_ui *ui)
{
    //Write codes screen_dianliu
    ui->screen_dianliu = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_dianliu, 480, 480);
    lv_obj_set_scrollbar_mode(ui->screen_dianliu, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_dianliu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianliu_img_1
    ui->screen_dianliu_img_1 = lv_image_create(ui->screen_dianliu);
    lv_obj_set_pos(ui->screen_dianliu_img_1, 0, -1);
    lv_obj_set_size(ui->screen_dianliu_img_1, 480, 480);
    lv_obj_add_flag(ui->screen_dianliu_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_dianliu_img_1, &_fengmian_RGB565A8_480x480);
    lv_image_set_pivot(ui->screen_dianliu_img_1, 50,50);
    lv_image_set_rotation(ui->screen_dianliu_img_1, 0);

    //Write style for screen_dianliu_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_dianliu_img_1, 168, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->screen_dianliu_img_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_dianliu_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianliu_label_dianliuA
    ui->screen_dianliu_label_dianliuA = lv_label_create(ui->screen_dianliu);
    lv_obj_set_pos(ui->screen_dianliu_label_dianliuA, 62, 147);
    lv_obj_set_size(ui->screen_dianliu_label_dianliuA, 99, 37);
    lv_label_set_text(ui->screen_dianliu_label_dianliuA, "A相电流\n（红色）");
    lv_label_set_long_mode(ui->screen_dianliu_label_dianliuA, LV_LABEL_LONG_WRAP);

    //Write style for screen_dianliu_label_dianliuA, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianliu_label_dianliuA, lv_color_hex(0xff002d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianliu_label_dianliuA, &lv_font_ZiTiQuanWeiJunHeiW22_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianliu_label_dianliuA, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianliu_label_dianliuA, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianliu_label_dianliuA, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianliu_label_dianliuB
    ui->screen_dianliu_label_dianliuB = lv_label_create(ui->screen_dianliu);
    lv_obj_set_pos(ui->screen_dianliu_label_dianliuB, 62, 223);
    lv_obj_set_size(ui->screen_dianliu_label_dianliuB, 100, 37);
    lv_label_set_text(ui->screen_dianliu_label_dianliuB, "B相电流\n（绿色）");
    lv_label_set_long_mode(ui->screen_dianliu_label_dianliuB, LV_LABEL_LONG_WRAP);

    //Write style for screen_dianliu_label_dianliuB, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianliu_label_dianliuB, lv_color_hex(0x2FDA64), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianliu_label_dianliuB, &lv_font_ZiTiQuanWeiJunHeiW22_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianliu_label_dianliuB, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianliu_label_dianliuB, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianliu_label_dianliuB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianliu_lalabel_dianliuC
    ui->screen_dianliu_lalabel_dianliuC = lv_label_create(ui->screen_dianliu);
    lv_obj_set_pos(ui->screen_dianliu_lalabel_dianliuC, 62, 290);
    lv_obj_set_size(ui->screen_dianliu_lalabel_dianliuC, 100, 37);
    lv_label_set_text(ui->screen_dianliu_lalabel_dianliuC, "C相电流\n（蓝色）");
    lv_label_set_long_mode(ui->screen_dianliu_lalabel_dianliuC, LV_LABEL_LONG_WRAP);

    //Write style for screen_dianliu_lalabel_dianliuC, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianliu_lalabel_dianliuC, lv_color_hex(0x2FCADA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianliu_lalabel_dianliuC, &lv_font_ZiTiQuanWeiJunHeiW22_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianliu_lalabel_dianliuC, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianliu_lalabel_dianliuC, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianliu_lalabel_dianliuC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianliu_label_dianliu
    ui->screen_dianliu_label_dianliu = lv_label_create(ui->screen_dianliu);
    lv_obj_set_pos(ui->screen_dianliu_label_dianliu, 262, 59);
    lv_obj_set_size(ui->screen_dianliu_label_dianliu, 100, 32);
    lv_label_set_text(ui->screen_dianliu_label_dianliu, "三相电流");
    lv_label_set_long_mode(ui->screen_dianliu_label_dianliu, LV_LABEL_LONG_WRAP);

    //Write style for screen_dianliu_label_dianliu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianliu_label_dianliu, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianliu_label_dianliu, &lv_font_ZiTiQuanWeiJunHeiW22_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianliu_label_dianliu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianliu_label_dianliu, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianliu_label_dianliu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianliu_chart_1
    ui->screen_dianliu_chart_1 = lv_chart_create(ui->screen_dianliu);
    lv_obj_set_pos(ui->screen_dianliu_chart_1, 227, 147);
    lv_obj_set_size(ui->screen_dianliu_chart_1, 238, 193);
    lv_obj_set_scrollbar_mode(ui->screen_dianliu_chart_1, LV_SCROLLBAR_MODE_OFF);
    lv_chart_set_type(ui->screen_dianliu_chart_1, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_dianliu_chart_1, 10, 10);
    lv_chart_set_point_count(ui->screen_dianliu_chart_1, 5);
    lv_chart_set_range(ui->screen_dianliu_chart_1, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_range(ui->screen_dianliu_chart_1, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    ui->screen_dianliu_chart_1_0 = lv_chart_add_series(ui->screen_dianliu_chart_1, lv_color_hex(0xff002d), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_0, 1);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_0, 20);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_0, 30);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_0, 40);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_0, 5);
#endif
    ui->screen_dianliu_chart_1_1 = lv_chart_add_series(ui->screen_dianliu_chart_1, lv_color_hex(0x2FDA64), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_1, 12);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_1, 14);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_1, 16);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_1, 33);
#endif
    ui->screen_dianliu_chart_1_2 = lv_chart_add_series(ui->screen_dianliu_chart_1, lv_color_hex(0x2FCADA), LV_CHART_AXIS_SECONDARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_2, 32);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_2, 35);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_2, 40);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_2, 77);
    lv_chart_set_next_value(ui->screen_dianliu_chart_1, ui->screen_dianliu_chart_1_2, 42);
#endif

    //Write style for screen_dianliu_chart_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_dianliu_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_dianliu_chart_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_dianliu_chart_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_dianliu_chart_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_dianliu_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_dianliu_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_dianliu_chart_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianliu_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_dianliu_chart_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_dianliu_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_dianliu_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianliu_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_dianliu_btn_1
    ui->screen_dianliu_btn_1 = lv_button_create(ui->screen_dianliu);
    lv_obj_set_pos(ui->screen_dianliu_btn_1, 70, 59);
    lv_obj_set_size(ui->screen_dianliu_btn_1, 88, 38);
    ui->screen_dianliu_btn_1_label = lv_label_create(ui->screen_dianliu_btn_1);
    lv_label_set_text(ui->screen_dianliu_btn_1_label, "Back\n");
    lv_label_set_long_mode(ui->screen_dianliu_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_dianliu_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_dianliu_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_dianliu_btn_1_label, LV_PCT(100));

    //Write style for screen_dianliu_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_dianliu_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_dianliu_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_dianliu_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_dianliu_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_dianliu_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_dianliu_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_dianliu_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_dianliu_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_dianliu_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_dianliu_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_dianliu.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_dianliu);

    //Init events for screen.
    events_init_screen_dianliu(ui);
}
