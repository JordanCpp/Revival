#ifndef Ext_Managers_TextManager_hpp
#define Ext_Managers_TextManager_hpp

#include <Ext/Loaders/TextLoader.hpp>
#include <unordered_map>

namespace Ext
{
    namespace Managers
    {
        class TextManager
        {
        public:
            TextManager(Ext::Loaders::TextLoader* textLoader);
            ~TextManager();
            Ext::Graphics::Text* Get(const std::string& text);
        private:
            Ext::Loaders::TextLoader* _TextLoader;
            std::unordered_map<std::string, Ext::Graphics::Text*> _Texts;
        };
    }
}

#endif