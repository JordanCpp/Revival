#ifndef Fallout_Tiles_ProtoLoader_hpp
#define Fallout_Tiles_ProtoLoader_hpp

#include <Ext/Readers/JsonReader.hpp>
#include <Fallout/Tiles/Proto.hpp>

namespace Fallout
{
    namespace Tiles
    {
        class ProtoLoader
        {
        public:
            void Load(Ext::Readers::JsonReader* reader);
            const Fallout::Tiles::Proto& Result();
        private:
            Fallout::Tiles::Proto _Result;
        };
    }
}

#endif