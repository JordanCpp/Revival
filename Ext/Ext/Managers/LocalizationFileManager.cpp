#include <Ext/Managers/LocalizationFileManager.hpp>

Ext::Managers::LocalizationFileManager::LocalizationFileManager(Ext::Managers::TextFileManager* textFileManager, Ext::Loaders::LocalizationFileLoader* localizationFileLoader, Ext::Readers::JsonReader* jsonReader) :
	_TextFileManager(textFileManager),
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
    std::string path = dir1 + dir2 + dir3 + file;

    auto i = _LocalizationFiles.find(path);

    Ext::Formats::LocalizationFile* p = nullptr;

    if (i == _LocalizationFiles.end())
    {
        _JsonReader->Parse(_TextFileManager->Get(dir1, dir2, dir3, file)->Content());

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