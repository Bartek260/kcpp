#ifndef ZAD_STRUCT_H
#define ZAD_STRUCT_H

#include "ZadKcpp.h"
#include <string>

struct Student
{
    std::string imie;
    std::string nazwisko;
    int indeks;
};

class ZadStruct : public ZadKcpp
{
public:
    void uruchom();
    std::string opis() const;
};

#endif
