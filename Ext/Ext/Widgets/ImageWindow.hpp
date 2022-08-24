#ifndef Ext_Widgets_ImageWindow_hpp
#define Ext_Widgets_ImageWindow_hpp

#include <Ext/Widgets/Window.hpp>
#include <Ext/Graphics/Image.hpp>

namespace Ext
{
    namespace Widgets
    {
        class ImageWindow : public Ext::Widgets::Window
        {
        public:
            ImageWindow(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
            void Body(Ext::Graphics::Image* body);
            void Draw();
        private:
            Ext::Graphics::Image* _Body;
        };
    }
}

#endif