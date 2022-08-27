#ifndef Fallout_Critters_Stats_hpp
#define Fallout_Critters_Stats_hpp

#include <array>
#include <Fallout/Gameplay/StatValue.hpp>

namespace Fallout
{
    namespace Critters
    {
        class Stats
        {
        public:
            enum
            {
                Strength,
                Perception,
                Endurance,
                Charisma,
                Intelligence,
                Agility,
                Luck,
                HitPoints,
                ActionPoints,
                Max
            };
        private:
            std::array<Fallout::Gameplay::StatValue, Fallout::Critters::Stats::Max> _Stats;
        };
    }
}

#endif