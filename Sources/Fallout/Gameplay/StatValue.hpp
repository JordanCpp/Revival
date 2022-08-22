#ifndef Fallout_Gameplay_StatValue_hpp
#define Fallout_Gameplay_StatValue_hpp

namespace Fallout
{
    namespace Gameplay
    {
        class StatValue
        {
        public:
            StatValue();
            int Value();
            int Current();
            int Number();
            int Percent();
        private:
            int _Value;
            int _Current;
            int _Number;
            int _Percent;
        };
    }
}

#endif