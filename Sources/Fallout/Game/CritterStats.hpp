#ifndef Fallout_Game_CritterStats_hpp
#define Fallout_Game_CritterStats_hpp

#include <array>
#include <Fallout/Gameplay/StatValue.hpp>

namespace Fallout
{
    namespace Game
    {
        class CritterStats
        {
        public:
            enum
            {
                Strength,
                Max
            };
            int Value(size_t index) const;
            int Current(size_t index) const;
            int Number(size_t index) const;
            int Percent(size_t index) const;
            int StatValue(size_t index) const;
            int StatCurrent(size_t index) const;
        private:
            std::array<Fallout::Gameplay::StatValue, Fallout::Game::CritterStats::Max> _Stats;
        };
    }
}

#endif