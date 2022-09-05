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
            const char* String(const std::string& member);
            int Integer(const std::string& member);
            double Double(const std::string& member);
            bool Boolean(const std::string& member);
        private:
            rapidjson::Document _Document;
            std::string _MemberFix;
        };
    }
}

#endif