#ifndef Fallout_Managers_LocalizationManager_hpp
#define Fallout_Managers_LocalizationManager_hpp

#include <Ext/Managers/LocalizationFileManager.hpp>

namespace Fallout
{
    namespace Managers
    {
        class LocalizationManager
        {
        public:
            LocalizationManager(const std::string& localization, Ext::Managers::LocalizationFileManager* localizationFileManager);
            void Localization(const std::string& localization);
            const std::string& Localization();
            void File(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file);
            const std::string& Get(size_t number);
            void Interface(const std::string& file);
        private:
            Ext::Managers::LocalizationFileManager* _LocalizationFileManager;
            std::string _CurrentLocalization;
            Ext::Formats::LocalizationFile* _CurrentLocalizationFile;
        };
    }
}

#endif