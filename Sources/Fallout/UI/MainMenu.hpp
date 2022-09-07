#ifndef Fallout_UI_MainMenu_hpp
#define Fallout_UI_MainMenu_hpp

#include <Ext/Widgets/Application.hpp>
#include <Ext/Managers/WidgetManager.hpp>
#include <Fallout/Managers/ImageManager.hpp>
#include <Fallout/UI/Screens.hpp>
#include <Fallout/Managers/LocalizationManager.hpp>

namespace Fallout
{
    namespace UI
    {
        class MainMenu
        {
        public:
            MainMenu(
                Ext::Managers::WidgetManager* widgetManager, 
                Ext::Widgets::Application* application, 
                Fallout::Managers::ImageManager* imageManager,
                Fallout::Managers::LocalizationManager* localizationManager);

            Ext::Widgets::Screen* Screen();
            void NewGame(const Ext::Graphics::Point2u& pos);
            void Editor(const Ext::Graphics::Point2u& pos);
            void Setting(const Ext::Graphics::Point2u& pos);
            void Exit(const Ext::Graphics::Point2u& pos);
        private:
            Ext::Managers::WidgetManager* _WidgetManager;
            Ext::Widgets::Application* _Application;
            Fallout::Managers::ImageManager* _ImageManager;
            Fallout::Managers::LocalizationManager* _LocalizationManager;
            Ext::Widgets::Screen* _Screen;
            Ext::Widgets::ImageWindow* _Window;
            Ext::Widgets::Button* _NewGame;
            Ext::Widgets::Button* _Editor;
            Ext::Widgets::Button* _Exit;
            Ext::Widgets::Button* _Setting;
        };
    }
}

#endif