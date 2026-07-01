#include "ZadMetodyAbstrakcyjne.h"
#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159

Figura::~Figura()
{
}

Kwadrat::Kwadrat(double b)
{
    bok = b;
}

double Kwadrat::pole() const
{
    return bok * bok;
}

double Kwadrat::obwod() const
{
    return 4 * bok;
}

std::string Kwadrat::nazwa() const
{
    return "Kwadrat";
}

ProstokatFigura::ProstokatFigura(double pa, double pb)
{
    a = pa;
    b = pb;
}

double ProstokatFigura::pole() const
{
    return a * b;
}

double ProstokatFigura::obwod() const
{
    return 2 * a + 2 * b;
}

std::string ProstokatFigura::nazwa() const
{
    return "Prostokat";
}

Trojkat::Trojkat(double pa, double pb, double pc, double h)
{
    a = pa;
    b = pb;
    c = pc;
    wysokosc = h;
}

double Trojkat::pole() const
{
    return (a * wysokosc) / 2.0;
}

double Trojkat::obwod() const
{
    return a + b + c;
}

std::string Trojkat::nazwa() const
{
    return "Trojkat";
}

Kolo::Kolo(double r)
{
    promien = r;
}

double Kolo::pole() const
{
    return PI * promien * promien;
}

double Kolo::obwod() const
{
    return 2 * PI * promien;
}

double Kolo::dystans(double metryNaOsobe) const
{
    // Jezeli jedna osoba ma miec X metrow kwadratowych,
    // to liczymy promien kola o takim polu: r = sqrt(X / PI).
    return std::sqrt(metryNaOsobe / PI);
}

std::string Kolo::nazwa() const
{
    return "Kolo";
}

void ZadMetodyAbstrakcyjne::pokazFigure(const Figura& figura)
{
    std::cout << std::setw(10) << figura.nazwa()
              << " | pole: " << std::setw(8) << figura.pole()
              << " | obwod: " << std::setw(8) << figura.obwod() << std::endl;
}

void ZadMetodyAbstrakcyjne::uruchom()
{
    std::cout << "Zadanie 5.6 - klasa abstrakcyjna Figura" << std::endl;
    std::cout << std::fixed << std::setprecision(2);

    Kwadrat kwadrat(4);
    ProstokatFigura prostokat(3, 7);
    Trojkat trojkat(4, 5, 6, 3);
    Kolo kolo(3);

    pokazFigure(kwadrat);
    pokazFigure(prostokat);
    pokazFigure(trojkat);
    pokazFigure(kolo);

    double metry = 4.0;
    std::cout << "Dla " << metry << " m2 na osobe dystans wynosi okolo: "
              << kolo.dystans(metry) << " m" << std::endl;
}

std::string ZadMetodyAbstrakcyjne::opis() const
{
    return "5.6  Figura abstrakcyjna: pole, obwod i dystans";
}
