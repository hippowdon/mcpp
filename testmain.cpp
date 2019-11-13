#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

#include "ex1.h"



TEST_CASE( "Foo works", "[classic]" ) 
{
    REQUIRE( mcpp::foo() == 42 );
}
