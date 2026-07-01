#ifndef ZAD_PRZECIAZANIE_POLE_H
#define ZAD_PRZECIAZANIE_POLE_H

#include "ZadKcpp.h"

class ZadPrzeciazaniePole : public ZadKcpp
{
private:
    double pole(double bok);
    double pole(double a, double b);
    double poleKola(double r);

public:
    void uruchom();
    std::string opis() const;
};

#endif
