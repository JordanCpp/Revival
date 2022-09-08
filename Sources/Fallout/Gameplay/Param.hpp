#ifndef Fallout_Gameplay_Param_hpp
#define Fallout_Gameplay_Param_hpp

namespace Fallout
{
    namespace Gameplay
    {
        template <typename TYPE>
        class Param
        {
        public:
            Param() :
                _Value(TYPE()),
                _Current(TYPE()),
                _Number(TYPE()),
                _Percent(TYPE())
            {
            }
            TYPE Value() const
            {
                return _Value;
            }
            TYPE Current() const
            {
                return _Current;
            }
            TYPE Number() const
            {
                return _Number;
            }
            TYPE Percent() const
            {
                return _Percent;
            }
            void Value(TYPE value)
            {
                _Value = value;
            }
            void Current(TYPE value)
            {
                _Current = value;
            }
            void Number(TYPE value)
            {
                _Number = value;
            }
            void Percent(TYPE value)
            {
                _Percent = value;
            }
        private:
            TYPE _Value;
            TYPE _Current;
            TYPE _Number;
            TYPE _Percent;
        };
    }
}

#endif