#include <Ext/Core/Tester.hpp>
#include <Ext/Core/Initializer.hpp>
#include <Ext/Loaders/FontLoader.hpp>

void TestExtGraphicsFontLoaderLoad()
{
	Ext::Core::Initializer initializer;

	Ext::Loaders::FontLoader fontLoader;

	Ext::Graphics::Font* font = nullptr;

	EXT_TESTER_EXCEPTION(font = fontLoader.Load("TestFiles/FalloutRegular.ttf", 7));

	EXT_TESTER_EQUAL(font->Get() != nullptr);
	EXT_TESTER_EQUAL(font->Size() == 7);
}

int main(int argc, char* argv[])
{
	TestExtGraphicsFontLoaderLoad();

	return 0;
}