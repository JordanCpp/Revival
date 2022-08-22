#ifndef Ext_Graphics_Painter_hpp
#define Ext_Graphics_Painter_hpp

#include <Ext/Graphics/Render.hpp>
#include <Ext/Graphics/Image.hpp>

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
            void Present();
            void Clear();
        private:
            Ext::Graphics::Render* _Render;
        };
    }
}

#endif