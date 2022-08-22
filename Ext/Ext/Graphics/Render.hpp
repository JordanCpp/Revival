#ifndef Ext_Graphics_Render_hpp
#define Ext_Graphics_Render_hpp

#include <Ext/Graphics/Window.hpp>

namespace Ext
{
    namespace Graphics
    {
        class Render
        {
        public:
            Render(Ext::Graphics::Window* window);
            SDL_Renderer* Get();
        private:
            SDL_Renderer* _Render;
            Ext::Graphics::Window* _Window;
        };
    }
}

#endif