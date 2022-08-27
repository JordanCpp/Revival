#include <Ext/Core/Tester.hpp>
#include <Ext/Core/Initializer.hpp>
#include <Ext/Managers/TextManager.hpp>
#include <Ext/Loaders/FontLoader.hpp>

void TestExtManagersTextManager()
{
	Ext::Core::Initializer initializer;
	Ext::Graphics::Window window(Ext::Graphics::Point2u(800, 600), "");
	Ext::Graphics::Render render(&window);
	Ext::Loaders::ImageLoader ImageLoader(&render, Ext::Graphics::Color(0, 0, 0));
	Ext::Loaders::FontLoader fontLoader;

	Ext::Graphics::Font* font = fontLoader.Load("TestFiles/FalloutRegular.ttf", 20);

	Ext::Loaders::TextLoader textLoader(&ImageLoader, font, Ext::Graphics::Color(0, 0, 0));
	Ext::Managers::TextManager textManager(&textLoader);

	Ext::Graphics::Text* text = nullptr;

	EXT_TESTER_EXCEPTION(text = textManager.Get("Hello World!"));

	EXT_TESTER_EQUAL(text->Get() != nullptr);
	EXT_TESTER_EQUAL(text->Size().PosX() > 0);
	EXT_TESTER_EQUAL(text->Size().PosY() > 0);
}

int main(int argc, char* argv[])
{
	TestExtManagersTextManager();

	return 0;
}