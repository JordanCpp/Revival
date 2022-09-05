#include <Ext/Core/Tester.hpp>
#include <Ext/Readers/JsonReader.hpp>
#include <Ext/Managers/TextFileManager.hpp>

int main(int argc, char* argv[])
{
	Ext::Loaders::TextFileLoader textFileLoader;
	Ext::Managers::PathManager pathManager("");
	Ext::Managers::TextFileManager textFileManager(&pathManager, &textFileLoader);

	Ext::Formats::TextFile* textFile = textFileManager.Get("TestFiles/", "TestJson.json");

	Ext::Readers::JsonReader reader;
	
	EXT_TESTER_EXCEPTION(reader.Parse(textFile->Content()));

	int Integer = 0;
	EXT_TESTER_EXCEPTION(Integer = reader.Integer("Integer"));
	Ext_Core_Tester_hpp(Integer != 0);
	Ext_Core_Tester_hpp(Integer == 42);

	double Double = 0;
	EXT_TESTER_EXCEPTION(Double = reader.Double("Double"));
	Ext_Core_Tester_hpp(Double != 0);
	Ext_Core_Tester_hpp(Double == 36.6);

	bool Boolean = false;
	EXT_TESTER_EXCEPTION(Boolean = reader.Boolean("Boolean"));
	Ext_Core_Tester_hpp(Boolean == true);

	const char* String = nullptr;
	EXT_TESTER_EXCEPTION(String = reader.String("String"));
	Ext_Core_Tester_hpp(String != nullptr);
	Ext_Core_Tester_hpp(String == "Hello, i am String!");

	return 0;
}