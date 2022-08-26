#include <Ext/Core/Tester.hpp>
#include <Ext/Core/Initializer.hpp>
#include <Ext/Loaders/ImageLoader.hpp>

void TestExtGraphicsImageLoader()
{
	Ext::Core::Initializer initializer;
	Ext::Graphics::Window window(Ext::Graphics::Point2u(800, 600), "");
	Ext::Graphics::Render render(&window);
	Ext::Loaders::ImageLoader ImageLoader(&render, Ext::Graphics::Color(0, 0, 0));

	Ext::Graphics::Image* image = nullptr;
	
	EXT_TESTER_EXCEPTION(image = ImageLoader.Load("TestFiles/MainMenu.jpg"));

	EXT_TESTER_EQUAL(image->Get() != nullptr);
	EXT_TESTER_EQUAL(image->Size().PosX() == 2880);
	EXT_TESTER_EQUAL(image->Size().PosY() == 1800);
}

int main(int argc, char* argv[])
{
	TestExtGraphicsImageLoader();

	return 0;
}