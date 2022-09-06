#include <Ext/Core/Tester.hpp>
#include <Ext/Loaders/LocalizationFileLoader.hpp>

void TestLocalizationFileLoader()
{
	Ext::Readers::JsonReader jsonReader;

	jsonReader.Parse("TestFiles/Text.json");

	Ext::Loaders::LocalizationFileLoader localizationFileLoader;

	Ext::Formats::LocalizationFile* localizationFile = localizationFileLoader.Load(&jsonReader);

	EXT_TESTER_EQUAL(localizationFile->Get(1) == "New game");
	EXT_TESTER_EQUAL(localizationFile->Get(2) == "Editor");
	EXT_TESTER_EQUAL(localizationFile->Get(3) == "Setting");
	EXT_TESTER_EQUAL(localizationFile->Get(4) == "Exit");
}

int main(int argc, char* argv[])
{
	TestLocalizationFileLoader();

	return 0;
}