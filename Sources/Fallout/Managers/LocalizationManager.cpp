#include <Fallout/Managers/LocalizationManager.hpp>

Fallout::Managers::LocalizationManager::LocalizationManager(const std::string& localization, Ext::Managers::LocalizationFileManager* localizationFileManager) :
	_CurrentLocalization(localization),
	_LocalizationFileManager(localizationFileManager),
	_CurrentLocalizationFile(nullptr)
{
}

void Fallout::Managers::LocalizationManager::Localization(const std::string& localization)
{
	_CurrentLocalization = localization;
}

const std::string& Fallout::Managers::LocalizationManager::Localization()
{
	return _CurrentLocalization;
}

void Fallout::Managers::LocalizationManager::File(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file)
{
	_CurrentLocalizationFile = _LocalizationFileManager->Get(dir1, dir2, dir3, file);
}

const std::string& Fallout::Managers::LocalizationManager::Get(size_t number)
{
	return _CurrentLocalizationFile->Get(number);
}

void Fallout::Managers::LocalizationManager::Interface(const std::string& file)
{
	File("Localizations/", _CurrentLocalization + '/', "", file);
}