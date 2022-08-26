#ifndef Ext_Core_Tester_hpp
#define Ext_Core_Tester_hpp

#include <iostream>
#include <string>
#include <Ext/Core/RuntimeError.hpp>

namespace Ext
{
    namespace Core
    {
        void TestEqual(bool condition, const char* description, const char* function, const char* file, size_t line);
    }
}

#define EXT_TESTER_EQUAL(x) Ext::Core::TestEqual(x, #x, __FUNCTION__, __FILE__, __LINE__)

#define EXT_TESTER_EXCEPTION( expression)                           \
                                                                    \
  try                                                               \
  {                                                                 \
     expression;                                                    \
  }                                                                 \
  catch( Ext::Core::RuntimeError& e )                               \
  {                                                                 \
      std::cout << std::string(__FILE__)                            \
                << std::string(":")                                 \
                << std::to_string(__LINE__)                         \
                << std::string(" in ")                              \
                << std::string(__FUNCTION__)                        \
                << '\n';                                            \
      std::cout << "Exception: " << e.what() << '\n';               \
  }                                                                 \

#endif