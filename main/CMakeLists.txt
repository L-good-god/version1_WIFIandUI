# 添加LVGL UI设计文件
set(UI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ui)
file(GLOB_RECURSE UI_SOURCES 
    ${UI_DIR}/custom/*.c
    ${UI_DIR}/generated/*.c
    ${UI_DIR}/generated/guider_fonts/*.c
    ${UI_DIR}/generated/images/*.c
)

# 添加WiFi模块文件
set(WIFI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/WIFI)
file(GLOB_RECURSE WIFI_SOURCES ${WIFI_DIR}/*.c)

# 添加MQTT模块文件
set(MQTT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/MQTT)
file(GLOB_RECURSE MQTT_SOURCES ${MQTT_DIR}/*.c)

idf_component_register(
    SRCS main.c ${UI_SOURCES} ${WIFI_SOURCES} ${MQTT_SOURCES}
    INCLUDE_DIRS . ${UI_DIR} ${UI_DIR}/custom ${UI_DIR}/generated ${WIFI_DIR} ${MQTT_DIR})

idf_component_get_property(LVGL_LIB lvgl__lvgl COMPONENT_LIB)
target_compile_options(
    ${LVGL_LIB} 
    PRIVATE
        -DLV_LVGL_H_INCLUDE_SIMPLE
)
