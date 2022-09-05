#include <Ext/Managers/TextFileManager.hpp>

Ext::Managers::TextFileManager::TextFileManager(Ext::Managers::PathManager* pathManager, Ext::Loaders::TextFileLoader* textFileLoader) :
	_PathManager(pathManager),
	_TextFileLoader(textFileLoader)
{
}

Ext::Managers::TextFileManager::~TextFileManager()
{
	for (auto i = _TextFiles.begin(); i != _TextFiles.end(); i++)
	{
		delete i->second;
	}
}

Ext::Formats::TextFile* Ext::Managers::TextFileManager::Get(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file)
{
    const char* path = _PathManager->Path(dir1, dir2, dir3, file).c_str();

    auto i = _TextFiles.find(path);

    Ext::Formats::TextFile* p = nullptr;

    if (i == _TextFiles.end())
    {
        _TextFileLoader->Load(path);

        p = new Ext::Formats::TextFile(_TextFileLoader->Result());

        _TextFiles.emplace(path, p);
    }
    else
        p = i->second;

    return p;
}

Ext::Formats::TextFile* Ext::Managers::TextFileManager::Get(const std::string& dir1, const std::string& dir2, const std::string& file)
{
    return Get(dir1, dir2, "", file);
}

Ext::Formats::TextFile* Ext::Managers::TextFileManager::Get(const std::string& dir1, const std::string& file)
{
    return Get(dir1, "", "", file);
}