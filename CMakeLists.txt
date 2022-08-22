cmake_minimum_required(VERSION 2.4)

project(Ext)

if (MSVC)
  add_subdirectory("dependencies/SDL2-2.0.22")
  include_directories("dependencies/SDL2-2.0.22/include")
  add_subdirectory("dependencies/SDL_image-main")
  include_directories("dependencies/SDL_image-main")
  add_subdirectory("dependencies/SDL_ttf-main")
  include_directories("dependencies/SDL_ttf-main")
endif()

include_directories("Ext/")

add_library(Ext STATIC 
"Ext/Ext/Core/Initializer.cpp"
"Ext/Ext/Events/Eventer.cpp"
"Ext/Ext/Graphics/Window.cpp"
"Ext/Ext/Graphics/Render.cpp"
"Ext/Ext/Graphics/Painter.cpp"
"Ext/Ext/Graphics/Image.cpp"
"Ext/Ext/Graphics/Color.cpp"
"Ext/Ext/Loaders/ImageLoader.cpp"
"Ext/Ext/Managers/PathManager.cpp"
"Ext/Ext/Managers/ImageManager.cpp")

target_link_libraries(Ext SDL2::SDL2 SDL2::SDL2main SDL2::image SDL2::ttf)

include_directories("Sources/")

add_executable(Fallout 
"Sources/Fallout/main.cpp"
"Sources/Fallout/Game/Engine.cpp"
"Sources/Fallout/Game/Settings.cpp")

target_link_libraries(Fallout Ext)