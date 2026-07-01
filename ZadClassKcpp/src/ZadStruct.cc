#include "ZadStruct.h"
#include <iostream>

void ZadStruct::uruchom()
{
    std::cout << "Zadanie 5.2 - przyklad struktury" << std::endl;

    Student s1;
    s1.imie = "Jan";
    s1.nazwisko = "Kowalski";
    s1.indeks = 12345;

    std::cout << "Student przed zmiana:" << std::endl;
    std::cout << s1.imie << " " << s1.nazwisko << ", indeks: " << s1.indeks << std::endl;

    s1.imie = "Adam";

    std::cout << "Student po zmianie imienia:" << std::endl;
    std::cout << s1.imie << " " << s1.nazwisko << ", indeks: " << s1.indeks << std::endl;
}

std::string ZadStruct::opis() const
{
    return "5.2  Struktura Student";
}
