#ifndef ZAD_WSKAZNIKI_ZAMIANA_H
#define ZAD_WSKAZNIKI_ZAMIANA_H

#include "ZadKcpp.h"

class ZadWskaznikiZamiana : public ZadKcpp
{
private:
    void zamien(int* a, int* b);

public:
    void uruchom();
    std::string opis() const;
};

#endif
