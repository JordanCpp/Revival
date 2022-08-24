#ifndef Fallout_UI_MainMenu_hpp
#define Fallout_UI_MainMenu_hpp

#include <Ext/Widgets/Application.hpp>
#include <Ext/Managers/WidgetManager.hpp>

namespace Fallout
{
    namespace UI
    {
        class MainMenu
        {
        public:
            MainMenu(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application);
        private:
            Ext::Managers::WidgetManager* _WidgetManager;
            Ext::Widgets::Application* _Application;
            Ext::Widgets::Screen* _Screen;
            Ext::Widgets::Window* _Window;
            Ext::Widgets::Button* _NewGame;
        };
    }
}

#endif