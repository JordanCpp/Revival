#ifndef Ext_Graphics_Painter_hpp
#define Ext_Graphics_Painter_hpp

#include <Ext/Graphics/Render.hpp>
#include <Ext/Graphics/Image.hpp>
#include <Ext/Graphics/Color.hpp>

namespace Ext
{
    namespace Graphics
    {
        class Painter
        {
        public:
            Painter(Ext::Graphics::Render* render);
            void Draw(Ext::Graphics::Image* image, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
            void Draw(Ext::Graphics::Image* image, const Ext::Graphics::Point2u& pos);
            void Draw(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size, const Ext::Graphics::Color& color);
            void Rect(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size, const Ext::Graphics::Color& color);
            void Present();
            void Clear();
        private:
            Ext::Graphics::Render* _Render;
        };
    }
}

#endif