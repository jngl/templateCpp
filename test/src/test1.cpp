#include <User.h>
#include <catch.hpp>


TEST_CASE( "name", "[User]" ) {
    User u("toto");
    REQUIRE( u.getName() == "toto" );
}
