#include <Ext/Core/Tester.hpp>
#include <Ext/Loaders/FontLoader.hpp>

void TestExtGraphicsFontInit()
{
	EXT_TESTER_EXCEPTION(Ext::Loaders::FontLoader fontLoader);
}

void TestExtGraphicsFontLoaderLoad()
{
	Ext::Loaders::FontLoader fontLoader;

	Ext::Graphics::Font* font = nullptr;

	EXT_TESTER_EXCEPTION(font = fontLoader.Load("TestFiles/FalloutRegular.ttf", 7));

	EXT_TESTER_EQUAL(font->Get() != nullptr);
	EXT_TESTER_EQUAL(font->Size() == 9);
}

int main(int argc, char* argv[])
{
	TestExtGraphicsFontInit();
	TestExtGraphicsFontLoaderLoad();

	return 0;
}