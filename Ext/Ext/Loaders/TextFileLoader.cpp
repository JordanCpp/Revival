#include <Ext/Loaders/TextFileLoader.hpp>

Ext::Formats::TextFile* Ext::Loaders::TextFileLoader::Load(const std::string& path)
{
	_Input.open(path);

	if (!_Input.is_open())
			throw std::runtime_error("Not found file " + path);

	getline(_Input, _Result, char(-1));

	_Input.close();

	return new Ext::Formats::TextFile(_Result);
}