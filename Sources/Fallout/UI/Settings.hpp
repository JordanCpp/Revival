#ifndef Fallout_UI_Settings_hpp
#define Fallout_UI_Settings_hpp

#include <Ext/Managers/WidgetManager.hpp>

namespace Fallout
{
    namespace UI
    {
        class Settings
        {
        public:
            Settings(Ext::Managers::WidgetManager* widgetManager);
            Ext::Widgets::Screen* Screen();
        private:
            Ext::Managers::WidgetManager* _WidgetManager;
            Ext::Widgets::Screen* _Screen;
            Ext::Widgets::Window* _Window;
        };
    }
}

#endif