#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.hpp"
#include "vogais.hpp"


TEST_CASE("Verificando: abacaxi, aeiou, zyxwv (f), zyxwv"){
    CHECK(vogais(abacaxi));
    CHECK(vogais(aeiou));
    CHECK_FALSE(vogais(zyxwv));
    CHECK_FALSE(vogais(pqrst));
}
