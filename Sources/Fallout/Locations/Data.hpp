#ifndef Fallout_Locations_Data_hpp
#define Fallout_Locations_Data_hpp

#include <vector>
#include <Ext/Graphics/Point2u.hpp>
#include <Fallout/Tiles/Tile.hpp>

namespace Fallout
{
    namespace Locations
    {
        class Data
        {
        public:
            const Ext::Graphics::Point2u& Size();
        private:
            Ext::Graphics::Point2u _Size;
            std::vector<Fallout::Tiles::Tile> _Tiles;
        };
    }
}

#endif