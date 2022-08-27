#include <Ext/Core/Tester.hpp>
#include <Ext/Formats/TextFile.hpp>

void TestExtFormatsTextFile()
{
	const std::string str = "Hello World!";

	Ext::Formats::TextFile textFile(str);

	EXT_TESTER_EQUAL(textFile.Content() == str);
}

int main(int argc, char* argv[])
{
	TestExtFormatsTextFile();

	return 0;
}