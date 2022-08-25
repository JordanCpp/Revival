#ifndef Ext_Graphics_Text_hpp
#define Ext_Graphics_Text_hpp

#include <Ext/Graphics/Image.hpp>

namespace Ext
{
    namespace Graphics
    {
        class Text
        {
        public:
            Text(Ext::Graphics::Image* image);
            const Ext::Graphics::Point2u& Size();
            Ext::Graphics::Image* Get();
        private:
            Ext::Graphics::Image* _Image;
        };
    }
}

#endif