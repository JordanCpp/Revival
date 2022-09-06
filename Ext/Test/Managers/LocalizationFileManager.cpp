#include <Ext/Core/Tester.hpp>
#include <Ext/Managers/LocalizationFileManager.hpp>

void TestLocalizationFileManager()
{
	Ext::Managers::PathManager pathManager("");

	Ext::Readers::JsonReader jsonReader;

	Ext::Loaders::LocalizationFileLoader localizationFileLoader;

	Ext::Managers::LocalizationFileManager localizationFileManager(&pathManager, &localizationFileLoader, &jsonReader);

	Ext::Formats::LocalizationFile* localizationFile = localizationFileManager.Get("TestFiles/", "Text.json");

	EXT_TESTER_EQUAL(localizationFile->Get(1) == "New game");
	EXT_TESTER_EQUAL(localizationFile->Get(2) == "Editor");
	EXT_TESTER_EQUAL(localizationFile->Get(3) == "Setting");
	EXT_TESTER_EQUAL(localizationFile->Get(4) == "Exit");
}

int main(int argc, char* argv[])
{
	TestLocalizationFileManager();

	return 0;
}