#ifndef Ext_Core_Tester_hpp
#define Ext_Core_Tester_hpp

#include <iostream>
#include <string>

#define EXT_TESTER_EQUAL( x, y )     if( ( x ) != ( y ) )          \
  {                                                                \
                   std::cout << std::string( __FILE__ )            \
                             << std::string( ":" )                 \
                             << std::to_string( __LINE__ )         \
                             << std::string( " in " )              \
                             << std::string( __FUNCTION__ )        \
                             << std::string( ": " )                \
                             << std::to_string( ( x ) )            \
                             << std::string( " != " )              \
                             << std::to_string( ( y ) ) << '\n';}  \

#endif