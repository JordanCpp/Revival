#ifndef Fallout_Managers_ProtoManager_hpp
#define Fallout_Managers_ProtoManager_hpp

#include <Ext/Readers/JsonReader.hpp>
#include <Ext/Managers/TextFileManager.hpp>
#include <Fallout/Critters/Proto.hpp>

namespace Fallout
{
    namespace Managers
    {
        class ProtoManager
        {
        public:
            ProtoManager(Ext::Managers::TextFileManager* textFileLoader, Ext::Readers::JsonReader* jsonReader);
            const Fallout::Critters::Proto& Proto(const std::string& file);
        private:
            Ext::Managers::TextFileManager* _TextFileManager;
            Ext::Readers::JsonReader* _JsonReader;
            Fallout::Critters::Proto _CritterProto;
        };
    }
}

#endif