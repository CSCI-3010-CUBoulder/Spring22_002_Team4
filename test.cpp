#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

using namespace std;


TEST_CASE( "Factorials are computed", "[Product]" ) {
    vector<int> vec;    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    REQUIRE( Product(vec) == 6 );
    vec.push_back(4);
    REQUIRE( Product(vec) == 24 );
}

TEST_CASE( "Factorials are computed", "[Sum]" ) {
    vector<int> vec;    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    REQUIRE( Product(vec) == 6);
    vec.push_back(4);
    REQUIRE( Product(vec) == 10);
}