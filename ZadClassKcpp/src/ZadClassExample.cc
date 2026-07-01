#include "ZadClassExample.h"
#include <iostream>

ZadClassExample::ZadClassExample()
{
    marka = "Opel";
    rok = 2010;
}

void ZadClassExample::pokazAuto() const
{
    std::cout << "Marka auta: " << marka << std::endl;
    std::cout << "Rok produkcji: " << rok << std::endl;
}

void ZadClassExample::uruchom()
{
    std::cout << "Zadanie 1.1 - prosty przyklad klasy" << std::endl;
    pokazAuto();
}

std::string ZadClassExample::opis() const
{
    return "1.1  Prosta klasa z polami i metoda";
}
