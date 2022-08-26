#ifndef Fallout_Game_Engine_hpp
#define Fallout_Game_Engine_hpp

#include <Ext/Core/Initializer.hpp>
#include <Ext/Graphics/Painter.hpp>
#include <Ext/Events/Eventer.hpp>
#include <Fallout/Game/Settings.hpp>
#include <Ext/Widgets/Application.hpp>
#include <Ext/Managers/WidgetManager.hpp>
#include <Fallout/UI/MainMenu.hpp>
#include <Fallout/Managers/ImageManager.hpp>
#include <Ext/Managers/FontManager.hpp>
#include <Ext/Managers/TextManager.hpp>
#include <Fallout/UI/Aggregator.hpp>

namespace Fallout
{
    namespace Game
    {
        class Engine
        {
        public:
            Engine(Fallout::Game::Settings* settings);
            void Run();
        private:
            Ext::Core::Initializer _Initializer;
            Fallout::Game::Settings* _Settings;
            Ext::Events::Eventer _Eventer;
            Ext::Graphics::Window _Window;
            Ext::Graphics::Render _Render;
            Ext::Graphics::Painter _Painter;
            Ext::Managers::WidgetManager _WidgetManager;
            Ext::Widgets::Application _Application;
            Ext::Loaders::ImageLoader _ImageLoader;
            Ext::Managers::PathManager _PathManager;
            Ext::Managers::ImageManager _ImageManager;
            Fallout::Managers::ImageManager _GameImageManager;
            Ext::Loaders::FontLoader _FontLoader;
            Ext::Managers::FontManager _FontManager;
            Ext::Loaders::TextLoader _TextLoader;
            Ext::Managers::TextManager _TextManager;
            Fallout::UI::Aggregator _Aggregator;
        };
    }
}

#endif