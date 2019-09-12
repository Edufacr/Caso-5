#ifndef CONCERTPRINTER_HPP
#define CONCERTPRINTER_HPP
#include "IPrinter.hpp"
class ConcertPrinter:public IPrinter
{
private:
    /* data */
public:
    ConcertPrinter(/* args */);
    ~ConcertPrinter();
    void Print();
};
#endif