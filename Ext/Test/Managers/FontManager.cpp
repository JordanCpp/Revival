#include <Ext/Core/Tester.hpp>
#include <Ext/Core/Initializer.hpp>
#include <Ext/Managers/FontManager.hpp>

void TestExtFontManager()
{
	Ext::Core::Initializer initializer;
	Ext::Loaders::FontLoader fontLoader;
	Ext::Managers::PathManager pathManager("");
	Ext::Managers::FontManager fontManager(&pathManager, &fontLoader);

	Ext::Graphics::Font* font = nullptr;

	EXT_TESTER_EXCEPTION(font = fontManager.Get("TestFiles/", "FalloutRegular.ttf"));
	EXT_TESTER_EQUAL(font->Get() != nullptr);
	EXT_TESTER_EQUAL(font->Size() == 20);
}

int main(int argc, char* argv[])
{
	TestExtFontManager();

	return 0;
}