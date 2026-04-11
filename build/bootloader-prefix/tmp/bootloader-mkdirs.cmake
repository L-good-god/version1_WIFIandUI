# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "E:/study/esp32/Espressif/frameworks/esp-idf-v5.3.1/components/bootloader/subproject"
  "E:/study/esp32/weixueesp32s3/ESP-IDF-v5.3.1/07_lvgl_demo_v9/build/bootloader"
  "E:/study/esp32/weixueesp32s3/ESP-IDF-v5.3.1/07_lvgl_demo_v9/build/bootloader-prefix"
  "E:/study/esp32/weixueesp32s3/ESP-IDF-v5.3.1/07_lvgl_demo_v9/build/bootloader-prefix/tmp"
  "E:/study/esp32/weixueesp32s3/ESP-IDF-v5.3.1/07_lvgl_demo_v9/build/bootloader-prefix/src/bootloader-stamp"
  "E:/study/esp32/weixueesp32s3/ESP-IDF-v5.3.1/07_lvgl_demo_v9/build/bootloader-prefix/src"
  "E:/study/esp32/weixueesp32s3/ESP-IDF-v5.3.1/07_lvgl_demo_v9/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/study/esp32/weixueesp32s3/ESP-IDF-v5.3.1/07_lvgl_demo_v9/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/study/esp32/weixueesp32s3/ESP-IDF-v5.3.1/07_lvgl_demo_v9/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
