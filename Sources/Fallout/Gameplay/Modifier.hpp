#ifndef Fallout_Gameplay_Modifier_hpp
#define Fallout_Gameplay_Modifier_hpp

namespace Fallout
{
    namespace Gameplay
    {
        class Modifier
        {
        public:
            int PercentOf(int percent, int value) const;
            float PercentOf(int percent, float value) const;
        private:
        };
    }
}

#endif