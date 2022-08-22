#include <Ext/Graphics/Window.hpp>
#include <stdexcept>

Ext::Graphics::Window::Window(const Ext::Graphics::Point2u& size, const std::string& title) :
	_Size(size),
	_Title(title),
	_Window(nullptr)
{
	_Window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, (int)size.PosX(), (int)size.PosY(), SDL_WINDOW_OPENGL);

	if (!_Window)
		throw std::runtime_error(SDL_GetError());
}

SDL_Window* Ext::Graphics::Window::Get()
{
	return _Window;
}

const Ext::Graphics::Point2u& Ext::Graphics::Window::Size()
{
	return _Size;
}

const std::string& Ext::Graphics::Window::Title()
{
	return _Title;
}