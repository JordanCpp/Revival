#ifndef Fallout_Critters_ProtoLoader_hpp
#define Fallout_Critters_ProtoLoader_hpp

#include <Ext/Readers/JsonReader.hpp>
#include <Fallout/Critters/Proto.hpp>

namespace Fallout
{
    namespace Critters
    {
        class ProtoLoader
        {
        public:
            void Load(Ext::Readers::JsonReader* reader);
            const Fallout::Critters::Proto& Result();
        private:
            Fallout::Critters::Proto _Result;
        };
    }
}

#endif