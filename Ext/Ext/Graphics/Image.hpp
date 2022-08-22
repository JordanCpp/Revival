#ifndef Ext_Graphics_Image_hpp
#define Ext_Graphics_Image_hpp

#include <Ext/Graphics/Render.hpp>

namespace Ext
{
    namespace Graphics
    {
        class Image
        {
        public:
            Image(SDL_Texture* texture, const Ext::Graphics::Point2u& size);
            SDL_Texture* Get();
        private:
            SDL_Texture* _Texture;
            Ext::Graphics::Point2u _Size;
        };
    }
}

#endif