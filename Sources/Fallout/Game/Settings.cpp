#include <Fallout/Game/Settings.hpp>

const Ext::Graphics::Point2u& Fallout::Game::Settings::Size()
{
	return _Size;
}

void Fallout::Game::Settings::Size(const Ext::Graphics::Point2u& value)
{
	_Size = value;
}

const std::string& Fallout::Game::Settings::Title()
{
	return _Title;
}

void Fallout::Game::Settings::Title(const std::string& value)
{
	_Title = value;
}