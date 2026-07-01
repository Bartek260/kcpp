#include "ZadWskaznikiSuma.h"
#include <iostream>

int ZadWskaznikiSuma::suma(int* tablica, int rozmiar)
{
    int wynik = 0;

    for (int i = 0; i < rozmiar; i++)
    {
        wynik += *(tablica + i);
    }

    return wynik;
}

void ZadWskaznikiSuma::uruchom()
{
    std::cout << "Zadanie 3.2 - suma tablicy przez wskazniki" << std::endl;
    int liczby[5] = {1, 2, 3, 4, 5};

    std::cout << "Tablica: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << liczby[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Suma = " << suma(liczby, 5) << std::endl;
}

std::string ZadWskaznikiSuma::opis() const
{
    return "3.2  Sumowanie tablicy wskaznikami";
}
