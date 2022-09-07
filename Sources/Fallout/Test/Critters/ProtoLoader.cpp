#include <Ext/Core/Tester.hpp>
#include <Fallout/Critters/ProtoLoader.hpp>
#include <Ext/Loaders/TextFileLoader.hpp>

void TestProtoLoader()
{
	Ext::Loaders::TextFileLoader textFileLoader;

	textFileLoader.Load("Files/Prototypes/Critters/Tester.json");

	Ext::Readers::JsonReader jsonReader;

	jsonReader.Parse(textFileLoader.Result());

	Fallout::Critters::ProtoLoader protoLoader;

	protoLoader.Load(&jsonReader);

	Fallout::Critters::Proto proto = protoLoader.Result();

	EXT_TESTER_EQUAL(proto.Stat(Fallout::Critters::Stats::Strength) == 3);
}

int main(int argc, char* argv[])
{
	TestProtoLoader();

	return 0;
}