/*
Zadanie 1.3
--------------------------------------
Napisać program (z zajęć) o treści zadanej w pliku LString.cc
- nazwać program: ZadStringExample.cc

 Zadanie podczas zajec
   *   Napisz funkcje (osobny program) w ktorym zadeklarujesz string i uzyjesz
   * na nim funkcji manipulacyjnych:
   *   1. empty()     Zwraca wartosc true jezeli napis jest pusty.
   *   2. size(),length()     Zwraca ilosc znakow w napisie.
   *   3. at()     Zwraca znak o podanym polozeniu, tak jak operator [], z tym
   * ze ta metoda jest bezpieczniejsza - wyrzuca wyjatek w przypadku wyjscia
   * poza zakres stringa.
   *   4. clear()     Usuwa wszystkie znaki z napisu.
   *   5. erase(...)     Usuwa wybrane znaki.
   *   6. find(...)     Znajduje podciag w ciagu, sa tez bardziej rozbudowane
   * funkcje tego typu.
   *   7. swap(...)     Zamienia miejscami dwa stringi, a staje sie b, a b staje
   * sie a.
   *   8. substr(...)     Zwraca podciag na podstawie indeksu poczatkowego i
   * dlugosci podciagu.
   *   9. append(...) 
*/



#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis = "Programowanie w C++";

    cout << "1. empty(): " << (napis.empty() ? "true" : "false") << endl;

    cout << "2. size(): " << napis.size() << endl;
    cout << "   length(): " << napis.length() << endl;

    cout << "3. at(0): " << napis.at(0) << endl;
    cout << "   at(5): " << napis.at(5) << endl;

    string tmp = napis;
    tmp.clear();
    cout << "4. Po clear(), size = " << tmp.size() << endl;

    tmp = napis;
    tmp.erase(0, 13); 
    cout << "5. erase(): " << tmp << endl;


    size_t pozycja = napis.find("C++");
    if (pozycja != string::npos)
    {
        cout << "6. find(\"C++\") znaleziono na pozycji: "
             << pozycja << endl;
    }


    string a = "Ala";
    string b = "Kot";

    cout << "7. Przed swap(): a = " << a << ", b = " << b << endl;

    a.swap(b);

    cout << "   Po swap(): a = " << a << ", b = " << b << endl;


    string podciag = napis.substr(0, 13);
    cout << "8. substr(0,13): " << podciag << endl;


    string tekst = "Witaj";
    tekst.append(" swiecie!");
    cout << "9. append(): " << tekst << endl;

    return 0;
}