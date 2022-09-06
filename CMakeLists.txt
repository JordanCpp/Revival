cmake_minimum_required(VERSION 3.7)

project(Ext)

if (MSVC)
  add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

  link_directories("dependencies/SDL2-2.24.0/lib/x86/"
                   "dependencies/SDL2_image-2.6.2/lib/x86"
                   "dependencies/SDL2_ttf-2.20.1/lib/x86")

  include_directories("dependencies/SDL2-2.24.0/include"
                      "dependencies/SDL2_image-2.6.2/include"
                      "dependencies/SDL2_ttf-2.20.1/include")
endif()

include_directories("Ext/")

add_library(Ext STATIC 
"Ext/Ext/Core/Initializer.cpp"
"Ext/Ext/Core/RuntimeError.cpp"
"Ext/Ext/Core/Tester.cpp"
"Ext/Ext/Events/Eventer.cpp"
"Ext/Ext/Graphics/Window.cpp"
"Ext/Ext/Graphics/Render.cpp"
"Ext/Ext/Graphics/Painter.cpp"
"Ext/Ext/Graphics/Image.cpp"
"Ext/Ext/Graphics/Color.cpp"
"Ext/Ext/Graphics/Font.cpp"
"Ext/Ext/Graphics/Text.cpp"
"Ext/Ext/Graphics/Camera.cpp"
"Ext/Ext/Loaders/ImageLoader.cpp"
"Ext/Ext/Loaders/TextFileLoader.cpp"
"Ext/Ext/Loaders/FontLoader.cpp"
"Ext/Ext/Loaders/TextLoader.cpp"
"Ext/Ext/Loaders/LocalizationFileLoader.cpp"
"Ext/Ext/Formats/TextFile.cpp"
"Ext/Ext/Formats/LocalizationFile.cpp"
"Ext/Ext/Managers/PathManager.cpp"
"Ext/Ext/Managers/ImageManager.cpp"
"Ext/Ext/Managers/TextFileManager.cpp"
"Ext/Ext/Managers/WidgetManager.cpp"
"Ext/Ext/Managers/FontManager.cpp"
"Ext/Ext/Managers/TextManager.cpp"
"Ext/Ext/Managers/LocalizationFileManager.cpp"
"Ext/Ext/Readers/JsonReader.cpp"
"Ext/Ext/Input/MouseInput.cpp"
"Ext/Ext/Widgets/Widget.cpp"
"Ext/Ext/Widgets/Screen.cpp"
"Ext/Ext/Widgets/Container.cpp"
"Ext/Ext/Widgets/Button.cpp" 
"Ext/Ext/Widgets/Window.cpp"
"Ext/Ext/Widgets/Application.cpp"
"Ext/Ext/Widgets/ImageWindow.cpp")

target_link_libraries(Ext SDL2main SDL2 SDL2_image SDL2_ttf)

include_directories("Sources/")

add_library(FalloutLibrary STATIC
"Sources/Fallout/Game/Engine.cpp"
"Sources/Fallout/Game/Settings.cpp"
"Sources/Fallout/Gameplay/StatValue.cpp"
"Sources/Fallout/Gameplay/Perk.cpp"
"Sources/Fallout/Gameplay/Attribute.cpp"
"Sources/Fallout/Gameplay/Modifier.cpp"
"Sources/Fallout/Managers/ProtoManager.cpp" 
"Sources/Fallout/Managers/ImageManager.cpp" 
"Sources/Fallout/UI/Aggregator.cpp"
"Sources/Fallout/UI/MainMenu.cpp"
"Sources/Fallout/UI/Editor.cpp"
"Sources/Fallout/UI/Settings.cpp"
"Sources/Fallout/Critters/Critter.cpp"
"Sources/Fallout/Critters/Script.cpp"
"Sources/Fallout/Critters/Stats.cpp"
"Sources/Fallout/Critters/Proto.cpp")

add_executable(Fallout "Sources/Fallout/main.cpp")

target_link_libraries(Fallout FalloutLibrary Ext)

add_subdirectory("Ext/Test")
add_subdirectory("Sources/Fallout/Test")