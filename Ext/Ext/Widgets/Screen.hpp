#ifndef Ext_Widgets_Screen_hpp
#define Ext_Widgets_Screen_hpp

#include <Ext/Widgets/Window.hpp>

namespace Ext
{
    namespace Widgets
    {
        class Screen : public Ext::Widgets::Widget
        {
        public:
            Screen(Ext::Graphics::Painter* painter, Ext::Graphics::Window* window);
            Ext::Widgets::Widget* Contains(const Ext::Graphics::Point2u& pos);
            void Attach(Ext::Widgets::Window* window);
            void Draw();
        private:
            Ext::Graphics::Painter* _Painter;
            Ext::Graphics::Window* _Window;
            Ext::Widgets::Container _Container;
        };
    }
}

#endif