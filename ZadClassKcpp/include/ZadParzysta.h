#ifndef ZAD_PARZYSTA_H
#define ZAD_PARZYSTA_H

#include "ZadKcpp.h"

class ZadParzysta : public ZadKcpp
{
private:
    bool parzystaBitowo(int liczba);
    bool parzystaModulo(int liczba);
    const char* parzystaWarunkowo(int liczba);

public:
    void uruchom();
    std::string opis() const;
};

#endif
