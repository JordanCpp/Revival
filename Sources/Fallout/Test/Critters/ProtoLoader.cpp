#include <Ext/Core/Tester.hpp>
#include <Fallout/Critters/ProtoLoader.hpp>
#include <Ext/Loaders/TextFileLoader.hpp>

void TestProtoLoader()
{
	Ext::Loaders::TextFileLoader textFileLoader;

	EXT_TESTER_EXCEPTION(textFileLoader.Load("Files/Prototypes/Critters/Tester.json"));

	Ext::Readers::JsonReader jsonReader;

	EXT_TESTER_EXCEPTION(jsonReader.Parse(textFileLoader.Result()));

	Fallout::Critters::ProtoLoader protoLoader;

	EXT_TESTER_EXCEPTION(protoLoader.Load(&jsonReader));

	Fallout::Critters::Proto proto = protoLoader.Result();

	EXT_TESTER_EQUAL(proto.Stat(Fallout::Critters::Stats::Strength) == 3);
}

int main(int argc, char* argv[])
{
	TestProtoLoader();

	return 0;
}