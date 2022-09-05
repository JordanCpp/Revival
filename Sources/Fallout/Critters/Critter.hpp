#ifndef Fallout_Critters_Critter_hpp
#define Fallout_Critters_Critter_hpp

#include <Fallout/Critters/Script.hpp>
#include <Fallout/Critters/Proto.hpp>

namespace Fallout
{
    namespace Critters
    {
        class Script;

        class Critter
        {
        public:
        private:
            Fallout::Critters::Script* _Script;
            Fallout::Critters::Proto _Proto;
        };
    }
}

#endif