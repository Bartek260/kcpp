#include "ZadTabelaFormat.h"
#include <iostream>
#include <iomanip>

void ZadTabelaFormat::uruchom()
{
    std::cout << "Zadanie 4.4 - tabela produktow" << std::endl;

    std::cout << std::left << "| " << std::setw(15) << "Nazwa"
              << " | " << std::right << std::setw(8) << "Cena"
              << " | " << std::setw(7) << "Ilosc" << " |" << std::endl;

    std::cout << "|-----------------|----------|---------|" << std::endl;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::left << "| " << std::setw(15) << "Chleb"
              << " | " << std::right << std::setw(8) << 4.99
              << " | " << std::setw(7) << 5 << " |" << std::endl;

    std::cout << std::left << "| " << std::setw(15) << "Mleko"
              << " | " << std::right << std::setw(8) << 3.20
              << " | " << std::setw(7) << 10 << " |" << std::endl;

    std::cout << std::left << "| " << std::setw(15) << "Jajka (10 szt)"
              << " | " << std::right << std::setw(8) << 8.50
              << " | " << std::setw(7) << 3 << " |" << std::endl;
}

std::string ZadTabelaFormat::opis() const
{
    return "4.4  Formatowana tabela produktow";
}
