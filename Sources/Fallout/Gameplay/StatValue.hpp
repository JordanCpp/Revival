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
            int Value() const;
            int Current() const;
            int Number() const;
            int Percent() const;
            void Value(int value);
            void Current(int value);
            void Number(int value);
            void Percent(int value);
        private:
            int _Value;
            int _Current;
            int _Number;
            int _Percent;
        };
    }
}

#endif