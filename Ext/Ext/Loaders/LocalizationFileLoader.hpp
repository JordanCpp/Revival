#ifndef Ext_Loaders_LocalizationFileLoader_hpp
#define Ext_Loaders_LocalizationFileLoader_hpp

#include <Ext/Formats/LocalizationFile.hpp>
#include <Ext/Readers/JsonReader.hpp>

namespace Ext
{
    namespace Loaders
    {
        class LocalizationFileLoader
        {
        public:
            Ext::Formats::LocalizationFile* Load(Ext::Readers::JsonReader* reader);
        private:
        };
    }
}

#endif