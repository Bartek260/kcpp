/*
Napisać program który zawiera:
- funkcję main
- 5 innych funkcji, z czego dwie zadeklarowane jako: extern "C"
- dodatkowo do wykonania w późniejszej cześci kursu: wywołując program decydujemy, które z funkcji mają zostać wykonane przez podanie tego w liście argumentów przekazanych do funkcji main
- nazwać program: ZadMainExample.cc 
*/


#include <iostream>

using namespace std;


extern "C" void funkcja1();
extern "C" void funkcja2();


void funkcja3();
void funkcja4();
void funkcja5();

int main(int argc, char *argv[])
{
    cout << "Przyklad programu z funkcja main i 5 funkcjami." << endl;

    funkcja1();
    funkcja2();
    funkcja3();
    funkcja4();
    funkcja5();

    return 0;
}


extern "C" void funkcja1()
{
    cout << "Wykonano funkcje 1 (extern C)" << endl;
}

extern "C" void funkcja2()
{
    cout << "Wykonano funkcje 2 (extern C)" << endl;
}

void funkcja3()
{
    cout << "Wykonano funkcje 3" << endl;
}

void funkcja4()
{
    cout << "Wykonano funkcje 4" << endl;
}

void funkcja5()
{
    cout << "Wykonano funkcje 5" << endl;
}