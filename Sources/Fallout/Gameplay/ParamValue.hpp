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
                IsFloat,
                IsInteger
            };
            ParamValue(uint8_t type);
            void Change(uint8_t type);
            int Integer() const;
            float Float() const;
            void Integer(int value);
            void Float(float value);
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