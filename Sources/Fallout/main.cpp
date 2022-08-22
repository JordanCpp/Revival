#include <stdexcept>
#include <iostream>
#include <Fallout/Game/Engine.hpp>

int main(int argc, char* argv[])
{
	try
	{
		Fallout::Game::Settings settings;
		settings.Size(Ext::Graphics::Point2u(800, 600));
		settings.Title("Fallout 2 implementation!");
		settings.Root("Files/");

		Fallout::Game::Engine engine(&settings);
		engine.Run();
	}
	catch (const std::runtime_error& error)
	{
		std::cout << error.what() << '\n';
	}

	return 0;
}