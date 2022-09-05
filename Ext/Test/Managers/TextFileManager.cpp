#include <Ext/Core/Tester.hpp>
#include <Ext/Managers/TextFileManager.hpp>

void TestExtManagersTextManager()
{
	Ext::Loaders::TextFileLoader textFileLoader;
	Ext::Managers::PathManager pathManager("");
	Ext::Managers::TextFileManager textFileManager(&pathManager, &textFileLoader);

	Ext::Formats::TextFile* textFile = textFileManager.Get("TestFiles/", "TextFile.txt");
	EXT_TESTER_EQUAL(textFile != nullptr);
	EXT_TESTER_EQUAL(textFile->Content() == "String1\nString2\nString3\n");
}

int main(int argc, char* argv[])
{
	TestExtManagersTextManager();

	return 0;
}