cmake_minimum_required(VERSION 2.4)

add_executable(Stats "Stats.cpp")
target_link_libraries(Stats FalloutLibrary Ext)

add_executable(ProtoLoader "ProtoLoader.cpp")
target_link_libraries(ProtoLoader FalloutLibrary Ext)