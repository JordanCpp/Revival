cmake_minimum_required(VERSION 2.4)

add_executable(PathManager "PathManager.cpp")
target_link_libraries(PathManager Ext)

add_executable(TextFileManager "TextFileManager.cpp")
target_link_libraries(TextFileManager Ext)

add_executable(FontManager "FontManager.cpp")
target_link_libraries(FontManager Ext)

add_executable(TextManager "TextManager.cpp")
target_link_libraries(TextManager Ext)

add_executable(ImageManager "ImageManager.cpp")
target_link_libraries(ImageManager Ext)