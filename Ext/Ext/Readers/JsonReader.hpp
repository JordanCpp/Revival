#ifndef Ext_Readers_JsonReader_hpp
#define Ext_Readers_JsonReader_hpp

#include <Ext/rapidjson/document.h>
#include <string>

namespace Ext
{
    namespace Readers
    {
        class JsonReader
        {
        public:
            void Parse(const std::string& source);
            rapidjson::Document* Reader();
        private:
            rapidjson::Document _Document;
        };
    }
}

#endif