#ifndef Ext_Graphics_Window_hpp
#define Ext_Graphics_Window_hpp

#include <SDL.h>
#include <Ext/Graphics/Point2u.hpp>
#include <string>

namespace Ext
{
    namespace Graphics
    {
        class Window
        {
        public:
            Window(const Ext::Graphics::Point2u& size, const std::string& title);
            SDL_Window* Get();
            const Ext::Graphics::Point2u& Size();
            const std::string& Title();
        private:
            Ext::Graphics::Point2u _Size;
            std::string _Title;
            SDL_Window* _Window;
        };
    }
}

#endif