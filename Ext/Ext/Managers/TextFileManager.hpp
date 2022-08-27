#ifndef Ext_Managers_TextFileManager_hpp
#define Ext_Managers_TextFileManager_hpp

#include <Ext/Managers/PathManager.hpp>
#include <Ext/Loaders/TextFileLoader.hpp>
#include <unordered_map>

namespace Ext
{
    namespace Managers
    {
        class TextFileManager
        {
        public:
            TextFileManager(Ext::Managers::PathManager* pathManager, Ext::Loaders::TextFileLoader* textFileLoader);
            ~TextFileManager();
            Ext::Formats::TextFile* Get(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file);
            Ext::Formats::TextFile* Get(const std::string& dir1, const std::string& dir2, const std::string& file);
            Ext::Formats::TextFile* Get(const std::string& dir1, const std::string& file);
        private:
            Ext::Managers::PathManager* _PathManager;
            Ext::Loaders::TextFileLoader* _TextFileLoader;
            std::unordered_map<std::string, Ext::Formats::TextFile*> _TextFiles;
        };
    }
}

#endif