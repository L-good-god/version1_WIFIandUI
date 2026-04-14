set(LV_DEMO_DIR ../managed_components/lvgl__lvgl/demos)
file(GLOB_RECURSE LV_DEMOS_SOURCES ${LV_DEMO_DIR}/*.c)

# 添加LVGL UI设计文件
set(UI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ui)
file(GLOB_RECURSE UI_SOURCES 
    ${UI_DIR}/custom/*.c
    ${UI_DIR}/generated/*.c
    ${UI_DIR}/generated/guider_fonts/*.c
    ${UI_DIR}/generated/images/*.c
)

idf_component_register(
    SRCS main.c ${LV_DEMOS_SOURCES} ${UI_SOURCES}
    INCLUDE_DIRS . ${LV_DEMO_DIR} ${UI_DIR} ${UI_DIR}/custom ${UI_DIR}/generated)

idf_component_get_property(LVGL_LIB lvgl__lvgl COMPONENT_LIB)
target_compile_options(
    ${LVGL_LIB} 
    PRIVATE
        -DLV_LVGL_H_INCLUDE_SIMPLE
        -DLV_USE_DEMO_MUSIC
)
