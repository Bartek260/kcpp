/*Zadanie 1.0
--------------------------------------
Napisać krótki program oparty na pliku LTypeEnumerated.cc, zawierający przykład użycia typu enum (scoped lub unscoped, z miesiącami)
- nazwać program: ZadEnumExample.cc
*/


#include <iostream>


enum class Month {
    January = 1, 
    February, 
    March,
    April, 
    May,
    June,
    July,
    August, 
    September, 
    October, 
    November, 
    December};

int main() {
    Month currentMonth = Month::June;
    
    if (currentMonth == Month::June) {
        std::cout << "Mamy czerwiec!" << std::endl;
    }

    
    return 0;
}