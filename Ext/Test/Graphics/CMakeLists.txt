cmake_minimum_required(VERSION 2.4)

add_executable(Point2u "Point2u.cpp")
target_link_libraries(Point2u Ext)

add_executable(Rect2u "Rect2u.cpp")
target_link_libraries(Rect2u Ext)

add_executable(Color "Color.cpp")
target_link_libraries(Color Ext)