#ifndef Ext_Widgets_Window_hpp
#define Ext_Widgets_Window_hpp

#include <Ext/Widgets/Container.hpp>

namespace Ext
{
    namespace Widgets
    {
        class Window: public Ext::Widgets::Widget
        {
        public:
            Window(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
            void Attach(Ext::Widgets::Widget* widget);
            void Draw();
        private:
            Ext::Widgets::Container _Container;
        };
    }
}

#endif