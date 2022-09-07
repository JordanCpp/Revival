#include <Ext/Core/Tester.hpp>
#include <Ext/Loaders/TextFileLoader.hpp>
#include <Ext/Loaders/LocalizationFileLoader.hpp>

void TestLocalizationFileLoader()
{
	Ext::Readers::JsonReader jsonReader;
	Ext::Loaders::TextFileLoader textFileLoader;
	Ext::Loaders::LocalizationFileLoader localizationFileLoader;

	EXT_TESTER_EXCEPTION(textFileLoader.Load("TestFiles/Text.json"));
	EXT_TESTER_EXCEPTION(jsonReader.Parse(textFileLoader.Result()));

	Ext::Formats::LocalizationFile* localizationFile = nullptr;
	
	EXT_TESTER_EXCEPTION(localizationFileLoader.Load(&jsonReader));

	EXT_TESTER_EXCEPTION(localizationFile->Get(1));
	EXT_TESTER_EXCEPTION(localizationFile->Get(2));
	EXT_TESTER_EXCEPTION(localizationFile->Get(3));
	EXT_TESTER_EXCEPTION(localizationFile->Get(4));

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