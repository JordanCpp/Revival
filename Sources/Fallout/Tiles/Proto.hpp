#ifndef Fallout_Tiles_Proto_hpp
#define Fallout_Tiles_Proto_hpp

#include <Ext/Graphics/Image.hpp>

namespace Fallout
{
    namespace Tiles
    {
        class Proto
        {
        public:
            Ext::Graphics::Image* Body();
            void Body(Ext::Graphics::Image* body);
        private:
            Ext::Graphics::Image* _Body;
        };
    }
}

#endif