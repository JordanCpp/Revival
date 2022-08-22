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
        private:
            std::array<Fallout::Gameplay::StatValue, Fallout::Game::CritterStats::Max> _Stats;
        };
    }
}

#endif