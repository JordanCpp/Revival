cmake_minimum_required(VERSION 2.4)

add_executable(LocalizationManager "LocalizationManager.cpp")
target_link_libraries(LocalizationManager FalloutLibrary Ext)