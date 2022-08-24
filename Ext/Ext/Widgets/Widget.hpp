#ifndef Ext_Widgets_Widget_hpp
#define Ext_Widgets_Widget_hpp

#include <Ext/Graphics/Painter.hpp>
#include <Ext/Graphics/Rect2u.hpp>
#include <functional>

namespace Ext
{
    namespace Widgets
    {
        class Widget
        {
        public:
            Widget(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
            virtual void Draw() = 0;
            const Ext::Graphics::Rect2u& Area();
            Ext::Graphics::Painter* Painter();
            std::function<void(const Ext::Graphics::Point2u& pos)> OnClick;
            std::function<void(const Ext::Graphics::Point2u& pos)> OnHover;
        private:
            Ext::Graphics::Painter* _Painter;
            Ext::Graphics::Rect2u _Area;
        };
    }
}

#endif