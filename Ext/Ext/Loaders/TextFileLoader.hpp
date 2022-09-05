#ifndef Ext_Loaders_TextFileLoader_hpp
#define Ext_Loaders_TextFileLoader_hpp

#include <Ext/Formats/TextFile.hpp>
#include <fstream>

namespace Ext
{
    namespace Loaders
    {
        class TextFileLoader
        {
        public:
            Ext::Formats::TextFile* Load(const std::string& path);
        private:
            std::ifstream _Input;
            std::string _Line;
            std::string _Result;
        };
    }
}

#endif