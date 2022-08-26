#include <Ext/Core/Tester.hpp>
#include <Ext/Core/Initializer.hpp>

void TestExtGraphicsInitializerInitException()
{
	EXT_TESTER_EXCEPTION(Ext::Core::Initializer initializer)
}

int main(int argc, char* argv[])
{
	TestExtGraphicsInitializerInitException();

	return 0;
}