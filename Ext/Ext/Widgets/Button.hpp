#ifndef Ext_Widgets_Button_hpp
#define Ext_Widgets_Button_hpp

#include <Ext/Widgets/Widget.hpp>
#include <Ext/Widgets/Container.hpp>

namespace Ext
{
    namespace Widgets
    {
        class Button: public Ext::Widgets::Widget
        {
        public:
            Button(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
            void Attach(Ext::Widgets::Widget* widget);
        private:
            Ext::Widgets::Container _Container;
        };
    }
}

#endif