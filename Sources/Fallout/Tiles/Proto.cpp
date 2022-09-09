#include <Fallout/Tiles/Proto.hpp>

Ext::Graphics::Image* Fallout::Tiles::Proto::Body()
{
	return _Body;
}

void Fallout::Tiles::Proto::Body(Ext::Graphics::Image* body)
{
	_Body = body;
}