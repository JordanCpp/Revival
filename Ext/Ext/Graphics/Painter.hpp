#ifndef Ext_Graphics_Painter_hpp
#define Ext_Graphics_Painter_hpp

#include <Ext/Graphics/Render.hpp>

namespace Ext
{
    namespace Graphics
    {
        class Painter
        {
        public:
            Painter(Ext::Graphics::Render* render);
            void Present();
            void Clear();
        private:
            Ext::Graphics::Render* _Render;
        };
    }
}

#endif