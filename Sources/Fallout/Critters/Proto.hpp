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
            void Stat(size_t index, int value);
            int Stat(size_t index);
            void Clear();
        private:
            Fallout::Critters::Stats _Stats;
        };
    }
}

#endif