cmake_minimum_required(VERSION 2.4)

add_executable(Param "Param.cpp")
target_link_libraries(Param FalloutLibrary Ext)

add_executable(Modifier "Modifier.cpp")
target_link_libraries(Modifier FalloutLibrary Ext)

add_executable(Attribute "Attribute.cpp")
target_link_libraries(Attribute FalloutLibrary Ext)

add_executable(Perk "Perk.cpp")
target_link_libraries(Perk FalloutLibrary Ext)

add_executable(ParamValue "ParamValue.cpp")
target_link_libraries(ParamValue FalloutLibrary Ext)