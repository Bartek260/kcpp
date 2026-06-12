/*Zadanie 1.1
--------------------------------------
Napisać prosty program z jedną klasą. Wszystko zawarte w jednym pliku: klasa oraz definicje funkcji. Definicje funkcji mogą być w klasie lub poza nią. Klasa oparta o przykład: KviCar.cc
- nazwać program: ZadClassExample.cc
*/

#include <iostream>

class Prostokat
{
private:
    double szerokosc;
    double wysokosc;

public:

    Prostokat(double s, double w)
    {
        szerokosc = s;
        wysokosc = w;
    }

    double pole()
    {
        return szerokosc * wysokosc;
    }


    void wyswietl()
    {
        std::cout << "Szerokosc: " << szerokosc << std::endl;
        std::cout << "Wysokosc: " << wysokosc << std::endl;
        std::cout << "Pole: " << pole() << std::endl;
    }
};

int main()
{
    Prostokat p(5, 3);

    p.wyswietl();

    return 0;
}