cmake_minimum_required(VERSION 2.4)

add_executable(TextFile "TextFile.cpp")
target_link_libraries(TextFile Ext)

add_executable(LocalizationFile "LocalizationFile.cpp")
target_link_libraries(LocalizationFile Ext)