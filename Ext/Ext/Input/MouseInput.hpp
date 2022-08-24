#ifndef Ext_Input_MouseInput_hpp
#define Ext_Input_MouseInput_hpp

#include <Ext/Graphics/Point2u.hpp>

namespace Ext
{
    namespace Input
    {
        class MouseInput
        {
        public:
            const Ext::Graphics::Point2u& Pos();
        private:
            Ext::Graphics::Point2u _Pos;
        };
    }
}

#endif