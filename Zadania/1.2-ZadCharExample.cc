/*
Zadanie 1.2
--------------------------------------
Napisać program który zawiera przykłady funkcji z biblioteki cstring (plik: LChar.cc)
- nazwać program: ZadCharExample.cc
*/

#include <iostream>
#include <cstring>

int main()
{
    char napis1[50] = "Ala";
    char napis2[50] = " ma kota";
    char napis3[50];


    std::cout << "Dlugosc napis1: " << strlen(napis1) << std::endl;


    strcpy(napis3, napis1);
    std::cout << "Po strcpy: " << napis3 << std::endl;


    strcat(napis1, napis2);
    std::cout << "Po strcat: " << napis1 << std::endl;
 

    int wynik = strcmp("abc", "abd");
    std::cout << "strcmp(\"abc\", \"abd\") = "  << wynik << std::endl;

             
    char *wsk = strchr(napis1, 'k');
    if (wsk != nullptr)
    {
        std::cout << "Znaleziono znak 'k': "<< wsk << std::endl;
    }


    char *podnapis = strstr(napis1, "kot");
    if (podnapis != nullptr)
    {
        std::cout << "Znaleziono podnapis: " << podnapis << std::endl;
                  
    }

    return 0;
}