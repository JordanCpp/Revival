#ifndef Ext_Managers_LocalizationFileManager_hpp
#define Ext_Managers_LocalizationFileManager_hpp

#include <Ext/Managers/PathManager.hpp>
#include <Ext/Loaders/TextFileLoader.hpp>
#include <Ext/Loaders/LocalizationFileLoader.hpp>
#include <unordered_map>

namespace Ext
{
    namespace Managers
    {
        class LocalizationFileManager
        {
        public:
            LocalizationFileManager(
                Ext::Managers::PathManager* pathManager,
                Ext::Loaders::TextFileLoader* textFileLoader,
                Ext::Loaders::LocalizationFileLoader* localizationFileLoader,
                Ext::Readers::JsonReader* jsonReader);
            ~LocalizationFileManager();
            Ext::Formats::LocalizationFile* Get(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file);
            Ext::Formats::LocalizationFile* Get(const std::string& dir1, const std::string& dir2, const std::string& file);
            Ext::Formats::LocalizationFile* Get(const std::string& dir1, const std::string& file);
        private:
            Ext::Managers::PathManager* _PathManager;
            Ext::Loaders::TextFileLoader* _TextFileLoader;
            Ext::Loaders::LocalizationFileLoader* _LocalizationFileLoader;
            Ext::Readers::JsonReader* _JsonReader;
            std::unordered_map<std::string, Ext::Formats::LocalizationFile*> _LocalizationFiles;
        };
    }
}

#endif