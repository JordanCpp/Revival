#ifndef Fallout_UI_MainMenu_hpp
#define Fallout_UI_MainMenu_hpp

#include <Ext/Widgets/Application.hpp>
#include <Ext/Managers/WidgetManager.hpp>
#include <Fallout/Managers/ImageManager.hpp>

namespace Fallout
{
    namespace UI
    {
        class MainMenu
        {
        public:
            MainMenu(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application, Fallout::Managers::ImageManager* imageManager);
            Ext::Widgets::Screen* Screen();
            void NewGame(const Ext::Graphics::Point2u& pos);
            void Editor(const Ext::Graphics::Point2u& pos);
            void Exit(const Ext::Graphics::Point2u& pos);
        private:
            Ext::Managers::WidgetManager* _WidgetManager;
            Ext::Widgets::Application* _Application;
            Fallout::Managers::ImageManager* _ImageManager;
            Ext::Widgets::Screen* _Screen;
            Ext::Widgets::ImageWindow* _Window;
            Ext::Widgets::Button* _NewGame;
            Ext::Widgets::Button* _Editor;
            Ext::Widgets::Button* _Exit;
        };
    }
}

#endif