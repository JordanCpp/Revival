#ifndef Fallout_Critters_Proto_hpp
#define Fallout_Critters_Proto_hpp

#include <Fallout/Critters/Stats.hpp>

namespace Fallout
{
    namespace Critters
    {
        class Proto
        {
        public:
            int Stat(size_t index);
            float Statf(size_t index);
            void Stat(size_t index, int value);
            void Stat(size_t index, float value);
            void Clear();
        private:
            Fallout::Critters::Stats _Stats;
        };
    }
}

#endif