#include <Ext/Core/Tester.hpp>

void Ext::Core::TestEqual(bool condition, const char* description, const char* function, const char* file, size_t line)
{
	if (!condition)
	{

		std::cout << "Test failed: "
		          << description
			      << ", function "
			      << function
			      << ", file "
			      << file
			      << ", line "
			      << line
		          << '\n';
	}
}