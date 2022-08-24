#include <Ext/Input/MouseInput.hpp>
#include <SDL.h>

const Ext::Graphics::Point2u& Ext::Input::MouseInput::Pos()
{
	int x = 0;
	int y = 0;

	SDL_GetMouseState(&x, &y);

	_Pos = Ext::Graphics::Point2u(x, y);

	return _Pos;
}
