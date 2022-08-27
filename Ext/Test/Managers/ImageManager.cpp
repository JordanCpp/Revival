#include <Ext/Core/Tester.hpp>
#include <Ext/Core/Initializer.hpp>
#include <Ext/Managers/ImageManager.hpp>

void TestExtManagersImageManager()
{
	Ext::Core::Initializer initializer;
	Ext::Graphics::Window window(Ext::Graphics::Point2u(800, 600), "");
	Ext::Graphics::Render render(&window);
	Ext::Loaders::ImageLoader ImageLoader(&render, Ext::Graphics::Color(0, 0, 0));
	Ext::Managers::PathManager pathManager("");
	Ext::Managers::ImageManager imageManager(&pathManager, &ImageLoader);

	Ext::Graphics::Image* image = nullptr;

	EXT_TESTER_EXCEPTION(image = imageManager.Get("TestFiles/", "MainMenu.jpg"));
	EXT_TESTER_EQUAL(image != nullptr);
	EXT_TESTER_EQUAL(image->Get() != nullptr);
	EXT_TESTER_EQUAL(image->Size().PosX() > 0);
	EXT_TESTER_EQUAL(image->Size().PosY() > 0);
}

int main(int argc, char* argv[])
{
	TestExtManagersImageManager();

	return 0;
}