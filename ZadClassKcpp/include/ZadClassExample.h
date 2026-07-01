#ifndef ZAD_CLASS_EXAMPLE_H
#define ZAD_CLASS_EXAMPLE_H

#include "ZadKcpp.h"
#include <string>

class ZadClassExample : public ZadKcpp
{
private:
    std::string marka;
    int rok;

public:
    ZadClassExample();
    void pokazAuto() const;
    void uruchom();
    std::string opis() const;
};

#endif
