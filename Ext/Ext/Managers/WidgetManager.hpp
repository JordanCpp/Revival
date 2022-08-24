#ifndef Ext_Managers_WidgetManager_hpp
#define Ext_Managers_WidgetManager_hpp

#include <Ext/Graphics/Painter.hpp>
#include <Ext/Widgets/Screen.hpp>

namespace Ext
{
    namespace Managers
    {
        class WidgetManager
        {
        public:
            WidgetManager(Ext::Graphics::Painter* painter);
            ~WidgetManager();
        private:
            Ext::Graphics::Painter* _Painter;
            std::vector<Ext::Widgets::Window*> _Windows;
            std::vector<Ext::Widgets::Screen*> _Screens;
            std::vector<Ext::Widgets::Widget*> _Widgets;
        };
    }
}

#endif