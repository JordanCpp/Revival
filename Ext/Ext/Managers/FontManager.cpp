#include <Ext/Managers/FontManager.hpp>

Ext::Managers::FontManager::FontManager(Ext::Managers::PathManager* pathManager, Ext::Loaders::FontLoader* fontLoader) :
	_PathManager(pathManager),
	_FontLoader(fontLoader)
{
}

Ext::Managers::FontManager::~FontManager()
{
	for (auto i = _Fonts.begin(); i != _Fonts.end(); i++)
	{
		delete i->second;
	}
}

Ext::Graphics::Font* Ext::Managers::FontManager::Get(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file)
{
    const char* path = _PathManager->Path(dir1, dir2, dir3, file).c_str();

    auto i = _Fonts.find(path);

    Ext::Graphics::Font* p = nullptr;

    if (i == _Fonts.end())
    {
        p = _FontLoader->Load(path, 20);
        _Fonts.emplace(path, p);
    }
    else
        p = i->second;

    return p;
}

Ext::Graphics::Font* Ext::Managers::FontManager::Get(const std::string& dir1, const std::string& dir2, const std::string& file)
{
    return Get(dir1, dir2, "", file);
}

Ext::Graphics::Font* Ext::Managers::FontManager::Get(const std::string& dir1, const std::string& file)
{
    return Get(dir1, "", "", file);
}