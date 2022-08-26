cmake_minimum_required(VERSION 2.4)

add_executable(FontLoader "FontLoader.cpp")
target_link_libraries(FontLoader Ext)

add_executable(ImageLoader "ImageLoader.cpp")
target_link_libraries(ImageLoader Ext)