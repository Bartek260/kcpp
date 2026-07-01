#ifndef ZAD_METODY_ABSTRAKCYJNE_H
#define ZAD_METODY_ABSTRAKCYJNE_H

#include "ZadKcpp.h"
#include <string>

class Figura
{
public:
    virtual ~Figura();
    virtual double pole() const = 0;
    virtual double obwod() const = 0;
    virtual std::string nazwa() const = 0;
};

class Kwadrat : public Figura
{
private:
    double bok;

public:
    Kwadrat(double b);
    double pole() const;
    double obwod() const;
    std::string nazwa() const;
};

class ProstokatFigura : public Figura
{
private:
    double a;
    double b;

public:
    ProstokatFigura(double pa, double pb);
    double pole() const;
    double obwod() const;
    std::string nazwa() const;
};

class Trojkat : public Figura
{
private:
    double a;
    double b;
    double c;
    double wysokosc;

public:
    Trojkat(double pa, double pb, double pc, double h);
    double pole() const;
    double obwod() const;
    std::string nazwa() const;
};

class Kolo : public Figura
{
private:
    double promien;

public:
    Kolo(double r);
    double pole() const;
    double obwod() const;
    double dystans(double metryNaOsobe) const;
    std::string nazwa() const;
};

class ZadMetodyAbstrakcyjne : public ZadKcpp
{
private:
    void pokazFigure(const Figura& figura);

public:
    void uruchom();
    std::string opis() const;
};

#endif
