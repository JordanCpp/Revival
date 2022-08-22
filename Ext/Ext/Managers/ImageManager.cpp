#include <Ext/Managers/ImageManager.hpp>

Ext::Managers::ImageManager::ImageManager(Ext::Managers::PathManager* pathManager, Ext::Loaders::ImageLoader* imageLoader) :
	_PathManager(pathManager),
	_ImageLoader(imageLoader)
{
}

Ext::Managers::ImageManager::~ImageManager()
{
	for (auto i = _Images.begin(); i != _Images.end(); i++)
	{
		delete i->second;
	}
}

Ext::Graphics::Image* Ext::Managers::ImageManager::Get(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file)
{
    const char* path = _PathManager->Path(dir1, dir2, dir3, file).c_str();

    auto i = _Images.find(path);

    Ext::Graphics::Image* p = nullptr;

    if (i == _Images.end())
    {
        p = _ImageLoader->Load(path);
        _Images.emplace(path, p);
    }
    else
    {
        p = i->second;
    }

    return p;
}

Ext::Graphics::Image* Ext::Managers::ImageManager::Get(const std::string& dir1, const std::string& dir2, const std::string& file)
{
    return Get(dir1, dir2, "", file);
}

Ext::Graphics::Image* Ext::Managers::ImageManager::Get(const std::string& dir1, const std::string& file)
{
    return Get(dir1, "", "", file);
}