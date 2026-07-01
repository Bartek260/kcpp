#include "ZadWskaznikiZamiana.h"
#include <iostream>

void ZadWskaznikiZamiana::zamien(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void ZadWskaznikiZamiana::uruchom()
{
    std::cout << "Zadanie 3.1 - zamiana liczb przez wskazniki" << std::endl;
    int x = 10;
    int y = 20;

    std::cout << "Przed zamiana: x = " << x << ", y = " << y << std::endl;
    zamien(&x, &y);
    std::cout << "Po zamianie:   x = " << x << ", y = " << y << std::endl;
}

std::string ZadWskaznikiZamiana::opis() const
{
    return "3.1  Zamiana dwoch liczb wskaznikami";
}
