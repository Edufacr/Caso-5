#ifndef FESTIVALPRINTER_HPP
#define FESTIVALPRINTER_HPP
#include "IPrinter.hpp"

class FestivalPrinter: public IPrinter
{
private:
    /* data */
public:
    FestivalPrinter(/* args */);
    ~FestivalPrinter();
    void Print();
};
#endif