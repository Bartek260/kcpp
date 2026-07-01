#include "ZadPrzeciazaniePlus.h"
#include <iostream>

Punkt::Punkt(int px, int py)
{
    x = px;
    y = py;
}

Punkt Punkt::operator+(const Punkt& drugi) const
{
    Punkt wynik(x + drugi.x, y + drugi.y);
    return wynik;
}

void Punkt::wypisz() const
{
    std::cout << "(" << x << ", " << y << ")";
}

void ZadPrzeciazaniePlus::uruchom()
{
    std::cout << "Zadanie 2.4 - przeciazenie operatora +" << std::endl;
    Punkt p1(2, 3);
    Punkt p2(5, 1);
    Punkt p3 = p1 + p2;

    std::cout << "p1 = ";
    p1.wypisz();
    std::cout << std::endl;

    std::cout << "p2 = ";
    p2.wypisz();
    std::cout << std::endl;

    std::cout << "p1 + p2 = ";
    p3.wypisz();
    std::cout << std::endl;
}

std::string ZadPrzeciazaniePlus::opis() const
{
    return "2.4  Przeciazenie operatora + dla Punkt";
}
