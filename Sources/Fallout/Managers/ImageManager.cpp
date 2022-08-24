#include <Fallout/Managers/ImageManager.hpp>

Fallout::Managers::ImageManager::ImageManager(Ext::Managers::ImageManager* imageManager) :
	_ImageManager(imageManager)
{
}

Ext::Graphics::Image* Fallout::Managers::ImageManager::Get(const std::string& file)
{
	return _ImageManager->Get("Images/", "Intefaces/", file);
}