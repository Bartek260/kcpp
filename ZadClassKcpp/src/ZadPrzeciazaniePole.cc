#include "ZadPrzeciazaniePole.h"
#include <iostream>

#define PI 3.14159

double ZadPrzeciazaniePole::pole(double bok)
{
    return bok * bok;
}

double ZadPrzeciazaniePole::pole(double a, double b)
{
    return a * b;
}

double ZadPrzeciazaniePole::poleKola(double r)
{
    return PI * r * r;
}

void ZadPrzeciazaniePole::uruchom()
{
    std::cout << "Zadanie 2.2 - przeciazanie funkcji pole" << std::endl;
    std::cout << "Pole kwadratu 5x5: " << pole(5) << std::endl;
    std::cout << "Pole prostokata 4x6: " << pole(4, 6) << std::endl;
    std::cout << "Pole kola r=3: " << poleKola(3) << std::endl;
}

std::string ZadPrzeciazaniePole::opis() const
{
    return "2.2  Przeciazanie funkcji pole";
}
