#include <Ext/Managers/LocalizationFileManager.hpp>

Ext::Managers::LocalizationFileManager::LocalizationFileManager(
    Ext::Managers::PathManager* pathManager, 
    Ext::Loaders::TextFileLoader* textFileLoader,
    Ext::Loaders::LocalizationFileLoader* localizationFileLoader, 
    Ext::Readers::JsonReader* jsonReader) :
    _PathManager(pathManager),
    _TextFileLoader(textFileLoader),
	_LocalizationFileLoader(localizationFileLoader),
    _JsonReader(jsonReader)
{
}

Ext::Managers::LocalizationFileManager::~LocalizationFileManager()
{
	for (auto i = _LocalizationFiles.begin(); i != _LocalizationFiles.end(); i++)
	{
		delete i->second;
	}
}

Ext::Formats::LocalizationFile* Ext::Managers::LocalizationFileManager::Get(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file)
{
    const char* path = _PathManager->Path(dir1, dir2, dir3, file).c_str();

    auto i = _LocalizationFiles.find(path);

    Ext::Formats::LocalizationFile* p = nullptr;

    if (i == _LocalizationFiles.end())
    {
        _TextFileLoader->Load(path);

        _JsonReader->Parse(_TextFileLoader->Result());

        p = _LocalizationFileLoader->Load(_JsonReader);

        _LocalizationFiles.emplace(path, p);
    }
    else
        p = i->second;

    return p;
}

Ext::Formats::LocalizationFile* Ext::Managers::LocalizationFileManager::Get(const std::string& dir1, const std::string& dir2, const std::string& file)
{
    return Get(dir1, dir2, "", file);
}

Ext::Formats::LocalizationFile* Ext::Managers::LocalizationFileManager::Get(const std::string& dir1, const std::string& file)
{
    return Get(dir1, "", "", file);
}