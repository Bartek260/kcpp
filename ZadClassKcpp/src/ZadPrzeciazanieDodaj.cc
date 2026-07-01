#include "ZadPrzeciazanieDodaj.h"
#include <iostream>

int ZadPrzeciazanieDodaj::dodaj(int a, int b)
{
    return a + b;
}

double ZadPrzeciazanieDodaj::dodaj(double a, double b)
{
    return a + b;
}

std::string ZadPrzeciazanieDodaj::dodaj(std::string a, std::string b)
{
    return a + b;
}

void ZadPrzeciazanieDodaj::uruchom()
{
    std::cout << "Zadanie 2.3 - przeciazanie funkcji dodaj" << std::endl;
    std::cout << "2 + 5 = " << dodaj(2, 5) << std::endl;
    std::cout << "2.5 + 3.1 = " << dodaj(2.5, 3.1) << std::endl;
    std::cout << "Ala + ma kota = " << dodaj(std::string("Ala "), std::string("ma kota")) << std::endl;
}

std::string ZadPrzeciazanieDodaj::opis() const
{
    return "2.3  Przeciazanie funkcji dodaj";
}
