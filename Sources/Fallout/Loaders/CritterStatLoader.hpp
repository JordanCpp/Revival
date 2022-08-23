#ifndef Fallout_Loaders_CritterStatLoader_hpp
#define Fallout_Loaders_CritterStatLoader_hpp

#include <Ext/Readers/JsonReader.hpp>

namespace Fallout
{
    namespace Loaders
    {
        class CritterStatLoader
        {
        public:
            CritterStatLoader(Ext::Readers::JsonReader* reader);
        private:
            Ext::Readers::JsonReader* _Reader;
        };
    }
}

#endif