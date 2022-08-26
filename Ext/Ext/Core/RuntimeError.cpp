#include <Ext/Core/RuntimeError.hpp>

Ext::Core::RuntimeError::RuntimeError(const std::string& message) :
	std::runtime_error(message)
{
}