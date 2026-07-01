#ifndef ZAD_WSKAZNIKI_SUMA_H
#define ZAD_WSKAZNIKI_SUMA_H

#include "ZadKcpp.h"

class ZadWskaznikiSuma : public ZadKcpp
{
private:
    int suma(int* tablica, int rozmiar);

public:
    void uruchom();
    std::string opis() const;
};

#endif
