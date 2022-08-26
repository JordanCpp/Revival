#include <Ext/Loaders/TextFileLoader.hpp>
#include <Ext/Core/RuntimeError.hpp>

Ext::Formats::TextFile* Ext::Loaders::TextFileLoader::Load(const std::string& path)
{
	_Input.open(path);

	if (!_Input.is_open())
			throw Ext::Core::RuntimeError("Not found file " + path);

	getline(_Input, _Result, char(-1));

	_Input.close();

	return new Ext::Formats::TextFile(_Result);
}