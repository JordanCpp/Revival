#include <Ext/Core/Tester.hpp>
#include <Ext/Formats/LocalizationFile.hpp>

void TestLocalizationFile()
{
	Ext::Formats::LocalizationFile localizationFile;

	localizationFile.Add(42, "Hello World!");

	EXT_TESTER_EQUAL(localizationFile.Get(42) == "Hello World!");
}

int main(int argc, char* argv[])
{
	TestLocalizationFile();

	return 0;
}