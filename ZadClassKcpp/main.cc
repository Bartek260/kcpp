#include <iostream>
#include <vector>
#include "ZadKcpp.h"
#include "ZadClassExample.h"
#include "ZadPrzeciazaniePole.h"
#include "ZadPrzeciazanieDodaj.h"
#include "ZadPrzeciazaniePlus.h"
#include "ZadWskaznikiZamiana.h"
#include "ZadWskaznikiSuma.h"
#include "ZadTabelaFormat.h"
#include "ZadParzysta.h"
#include "ZadStruct.h"
#include "ZadMetodyAbstrakcyjne.h"

void pokazMenu(const std::vector<ZadKcpp*>& zadania)
{
    std::cout << std::endl;
    std::cout << "===== MENU ZADAN KCPP =====" << std::endl;

    for (int i = 0; i < (int)zadania.size(); i++)
    {
        std::cout << i + 1 << ". " << zadania[i]->opis() << std::endl;
    }

    std::cout << "0. Koniec programu" << std::endl;
    std::cout << "Wybierz zadanie: ";
}

int main()
{
    std::vector<ZadKcpp*> zadania;

    zadania.push_back(new ZadClassExample());
    zadania.push_back(new ZadPrzeciazaniePole());
    zadania.push_back(new ZadPrzeciazanieDodaj());
    zadania.push_back(new ZadPrzeciazaniePlus());
    zadania.push_back(new ZadWskaznikiZamiana());
    zadania.push_back(new ZadWskaznikiSuma());
    zadania.push_back(new ZadTabelaFormat());
    zadania.push_back(new ZadParzysta());
    zadania.push_back(new ZadStruct());
    zadania.push_back(new ZadMetodyAbstrakcyjne());

    int wybor = -1;

    do
    {
        pokazMenu(zadania);
        std::cin >> wybor;
        std::cout << std::endl;

        if (wybor > 0 && wybor <= (int)zadania.size())
        {
            zadania[wybor - 1]->uruchom();
        }
        else if (wybor == 0)
        {
            std::cout << "Koniec programu." << std::endl;
        }
        else
        {
            std::cout << "Nie ma takiego zadania w menu." << std::endl;
        }

    } while (wybor != 0);

    for (int i = 0; i < (int)zadania.size(); i++)
    {
        delete zadania[i];
    }

    return 0;
}
