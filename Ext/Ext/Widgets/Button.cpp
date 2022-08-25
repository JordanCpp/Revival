#include <Ext/Widgets/Button.hpp>

Ext::Widgets::Button::Button(Ext::Graphics::Painter* painter, Ext::Managers::TextManager* textManager, const std::string& caption, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size) :
	Ext::Widgets::Widget(painter, pos, size),
	_TextManager(textManager),
	_Caption(caption)
{
}

void Ext::Widgets::Button::Attach(Ext::Widgets::Widget* widget)
{
	_Container.Attach(widget);
}

void Ext::Widgets::Button::Draw()
{
	if (State() == Ext::Widgets::Widget::Normal)
		Painter()->Draw(Area().Pos(), Area().Size(), Ext::Graphics::Color(194, 194, 194));
	else if (State() == Ext::Widgets::Widget::Hover)
	{
		Painter()->Draw(Area().Pos(), Area().Size(), Ext::Graphics::Color(194, 194, 194));
		Painter()->Rect(Area().Pos(), Area().Size(), Ext::Graphics::Color(237, 28, 36));
	}
	else
		Painter()->Draw(Area().Pos(), Area().Size(), Ext::Graphics::Color(153, 153, 153));

	Ext::Graphics::Text* text = _TextManager->Get(_Caption);

	size_t x = Area().Pos().PosX() + (Area().Size().PosX() / 2 - text->Size().PosX() / 2);
	size_t y = Area().Pos().PosY() + (Area().Size().PosY() / 2 - text->Size().PosY() / 2);

	Painter()->Draw(text, Ext::Graphics::Point2u(x, y));
}