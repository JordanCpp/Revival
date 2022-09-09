#ifndef Fallout_Gameplay_ParamValue_hpp
#define Fallout_Gameplay_ParamValue_hpp

#include <cstdint>

namespace Fallout
{
    namespace Gameplay
    {
        class ParamValue
        {
        public:
            enum
            {
                Float,
                Integer
            };
            ParamValue(uint8_t type);
            int GetInteger();
            float GetFloat();
            void Set(float value);
            void Set(int value);
        private:
            uint8_t _Type;
            union 
            {
                float _Float;
                int   _Integer;
            };
        };
    }
}

#endif