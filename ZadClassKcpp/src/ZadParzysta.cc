#include "ZadParzysta.h"
#include <iostream>

bool ZadParzysta::parzystaBitowo(int liczba)
{
    // Przyklad: 6 binarnie to 110, a 1 to 001.
    // 110 & 001 = 000, czyli liczba jest parzysta.
    return (liczba & 1) == 0;
}

bool ZadParzysta::parzystaModulo(int liczba)
{
    return liczba % 2 == 0;
}

const char* ZadParzysta::parzystaWarunkowo(int liczba)
{
    return (liczba % 2 == 0) ? "parzysta" : "nieparzysta";
}

void ZadParzysta::uruchom()
{
    std::cout << "Zadanie 4.7 - sprawdzanie parzystosci" << std::endl;
    int liczba = 13;

    std::cout << "Liczba: " << liczba << std::endl;
    std::cout << "Bitowo: " << (parzystaBitowo(liczba) ? "parzysta" : "nieparzysta") << std::endl;
    std::cout << "Modulo: " << (parzystaModulo(liczba) ? "parzysta" : "nieparzysta") << std::endl;
    std::cout << "Operator warunkowy: " << parzystaWarunkowo(liczba) << std::endl;
}

std::string ZadParzysta::opis() const
{
    return "4.7  Trzy sposoby sprawdzania parzystosci";
}
