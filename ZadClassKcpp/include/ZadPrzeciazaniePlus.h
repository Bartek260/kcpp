#ifndef ZAD_PRZECIAZANIE_PLUS_H
#define ZAD_PRZECIAZANIE_PLUS_H

#include "ZadKcpp.h"
#include <string>

class Punkt
{
private:
    int x;
    int y;

public:
    Punkt(int px = 0, int py = 0);
    Punkt operator+(const Punkt& drugi) const;
    void wypisz() const;
};

class ZadPrzeciazaniePlus : public ZadKcpp
{
public:
    void uruchom();
    std::string opis() const;
};

#endif
