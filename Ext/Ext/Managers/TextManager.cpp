#include <Ext/Managers/TextManager.hpp>

Ext::Managers::TextManager::TextManager(Ext::Loaders::TextLoader* textLoader) :
	_TextLoader(textLoader)
{
}

Ext::Managers::TextManager::~TextManager()
{
	for (auto i = _Texts.begin(); i != _Texts.end(); i++)
	{
		delete i->second;
	}
}

Ext::Graphics::Text* Ext::Managers::TextManager::Get(const std::string& text)
{
    auto i = _Texts.find(text);

    Ext::Graphics::Text* p = nullptr;

    if (i == _Texts.end())
    {
        p = _TextLoader->Load(text);
        _Texts.emplace(text, p);
    }
    else
        p = i->second;

    return p;
}