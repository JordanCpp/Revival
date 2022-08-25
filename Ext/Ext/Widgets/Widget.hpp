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
            enum
            {
                Normal,
                Hover,
                Down,
                Up
            };
            Widget(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
            size_t State();
            void State(size_t state);
            virtual void Draw() = 0;
            const Ext::Graphics::Rect2u& Area();
            Ext::Graphics::Painter* Painter();
            std::function<void(const Ext::Graphics::Point2u& pos)> OnClick;
            std::function<void(const Ext::Graphics::Point2u& pos)> OnHover;
        private:
            size_t _State;
            Ext::Graphics::Painter* _Painter;
            Ext::Graphics::Rect2u _Area;
        };
    }
}

#endif