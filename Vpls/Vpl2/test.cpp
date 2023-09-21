#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.hpp"


TEST_CASE("Verificando: abacaxi, aeiou, zyxwv (f), zyxwv"){
    CHECK(vogais(abacaxi));
    CHECK(vogais(aeiou));
    CHECK(vogais(zyxwv));
    CHECK_FALSE(vogais(zyxwv));
}
