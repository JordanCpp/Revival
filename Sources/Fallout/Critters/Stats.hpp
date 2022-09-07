#ifndef Fallout_Critters_Stats_hpp
#define Fallout_Critters_Stats_hpp

#include <array>
#include <Fallout/Gameplay/StatValue.hpp>
#include <Fallout/Gameplay/Modifier.hpp>

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
            int Value(size_t index) const;
            int Current(size_t index) const;
            int Number(size_t index) const;
            int Percent(size_t index) const;
            void Value(size_t index, int value);
            void Current(size_t index, int value);
            void Number(size_t index, int value);
            void Percent(size_t index, int value);
            int StatValue(size_t index) const;
            int StatCurrent(size_t index) const;
            void Clear();
        private:
            Fallout::Gameplay::Modifier _Modifier;
            std::array<Fallout::Gameplay::StatValue, Fallout::Critters::Stats::Max> _Stats;
        };
    }
}

#endif