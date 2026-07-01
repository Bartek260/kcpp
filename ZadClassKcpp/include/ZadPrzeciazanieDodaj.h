#ifndef ZAD_PRZECIAZANIE_DODAJ_H
#define ZAD_PRZECIAZANIE_DODAJ_H

#include "ZadKcpp.h"
#include <string>

class ZadPrzeciazanieDodaj : public ZadKcpp
{
private:
    int dodaj(int a, int b);
    double dodaj(double a, double b);
    std::string dodaj(std::string a, std::string b);

public:
    void uruchom();
    std::string opis() const;
};

#endif
