#ifndef Fallout_Gameplay_Perk_hpp
#define Fallout_Gameplay_Perk_hpp

#include <array>
#include <Fallout/Gameplay/Attribute.hpp>
#include <Fallout/Gameplay/Modifier.hpp>

namespace Fallout
{
    namespace Gameplay
    {
        class Perk
        {
        public:
            enum
            {
                Max = 8
            };
            Perk();
            void Add(const Fallout::Gameplay::Attribute& attribute);
            int Bonus(size_t id, int value);
        private:
            Fallout::Gameplay::Modifier _Modifier;
            std::array<Fallout::Gameplay::Attribute, Fallout::Gameplay::Perk::Max> _Attributes;
            size_t _Index;
        };
    }
}

#endif