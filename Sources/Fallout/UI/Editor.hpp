#ifndef Fallout_UI_Editor_hpp
#define Fallout_UI_Editor_hpp

#include <Ext/Managers/WidgetManager.hpp>
#include <Ext/Widgets/Application.hpp>

namespace Fallout
{
    namespace UI
    {
        class Editor
        {
        public:
            Editor(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application);
            Ext::Widgets::Screen* Screen();
        private:
            Ext::Managers::WidgetManager* _WidgetManager;
            Ext::Widgets::Application* _Application;
            Ext::Widgets::Screen* _Screen;
            Ext::Widgets::Window* _Window;
        };
    }
}

#endif