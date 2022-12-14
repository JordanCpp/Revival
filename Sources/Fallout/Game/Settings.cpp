#include "Settings.hpp"
#include "Settings.hpp"
#include <Fallout/Game/Settings.hpp>
#include "Settings.hpp"

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

const std::string& Fallout::Game::Settings::Root()
{
	return _Root;
}

void Fallout::Game::Settings::Root(const std::string& value)
{
	_Root = value;
}

const std::string& Fallout::Game::Settings::Localization()
{
	return _Localization;
}

void Fallout::Game::Settings::Localization(const std::string& value)
{
	_Localization = value;
}