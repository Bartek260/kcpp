#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <string>

class ZadKcpp
{
public:
    ZadKcpp();
    virtual ~ZadKcpp();

    virtual void uruchom() = 0;
    virtual std::string opis() const = 0;
};

#endif
