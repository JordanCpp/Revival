#ifndef Ext_Widgets_Container_hpp
#define Ext_Widgets_Container_hpp

#include <Ext/Widgets/Widget.hpp>
#include <vector>

namespace Ext
{
    namespace Widgets
    {
        class Container
        {
        public:
            Ext::Widgets::Widget* Contains(const Ext::Graphics::Point2u& pos);
            void Attach(Ext::Widgets::Widget* widget);
            std::vector<Ext::Widgets::Widget*>& Widgets();
            void Draw();
        private:
            std::vector<Ext::Widgets::Widget*> _Widgets;
        };
    }
}

#endif