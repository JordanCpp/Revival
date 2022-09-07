#include <Ext/Core/Tester.hpp>
#include <Fallout/Managers/LocalizationManager.hpp>

void TestLocalizationManager()
{
	Ext::Managers::PathManager pathManager("TestFiles/");
	Ext::Loaders::TextFileLoader textFileLoader;
	Ext::Readers::JsonReader jsonReader;
	Ext::Loaders::LocalizationFileLoader localizationFileLoader;

	Ext::Managers::LocalizationFileManager localizationFileManager(&pathManager, &textFileLoader, &localizationFileLoader, &jsonReader);

	Fallout::Managers::LocalizationManager localizationManager(&localizationFileManager);

	localizationManager.Localization("English");

	EXT_TESTER_EQUAL(localizationManager.Localization() == "English");

	EXT_TESTER_EXCEPTION(localizationManager.Interface("MainMenu.json"));
	EXT_TESTER_EXCEPTION(localizationManager.Get(1));

	EXT_TESTER_EQUAL(localizationManager.Get(1) == "New game");
}

int main(int argc, char* argv[])
{
	TestLocalizationManager();

	return 0;
}