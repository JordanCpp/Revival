#ifndef Fallout_Gameplay_Param_hpp
#define Fallout_Gameplay_Param_hpp

#include <Fallout/Gameplay/ParamValue.hpp>

namespace Fallout
{
    namespace Gameplay
    {
        class Param
        {
        public:
            Param();
            int Valuei() const;
            float Valuef() const;
            int Currenti() const;
            float Currentf() const;
            int Numberi() const;
            float Numberf() const;
            int Percent() const;
            void Value(int value);
            void Value(float value);
            void Current(int value);
            void Current(float value);
            void Number(int value);
            void Number(float value);
            void Percent(int value);
            void Change(uint8_t type);
        private:
            ParamValue _Value;
            ParamValue _Current;
            ParamValue _Number;
            int _Percent;
        };
    }
}

#endif