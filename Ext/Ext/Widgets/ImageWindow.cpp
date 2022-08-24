#include <Ext/Widgets/ImageWindow.hpp>

Ext::Widgets::ImageWindow::ImageWindow(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size) :
	Ext::Widgets::Window(painter, pos, size),
	_Body(nullptr)
{
}

void Ext::Widgets::ImageWindow::Body(Ext::Graphics::Image* body)
{
	_Body = body;
}

void Ext::Widgets::ImageWindow::Draw()
{
	if (_Body)
		Painter()->Draw(_Body, Area().Pos(), Area().Size());

	DrawWidgets();
}