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
            WidgetManager(Ext::Graphics::Painter* painter, Ext::Graphics::Window* window);
            ~WidgetManager();
            Ext::Widgets::Screen* NewScreen();
        private:
            Ext::Graphics::Painter* _Painter;
            Ext::Graphics::Window* _Window;
            std::vector<Ext::Widgets::Widget*> _Widgets;
        };
    }
}

#endif