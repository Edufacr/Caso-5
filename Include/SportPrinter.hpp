#ifndef SPORTPRINTER_HPP
#define SPORTPRINTER_HPP
#include "IPrinter.hpp"
class SportPrinter: public IPrinter
{
private:
    /* data */
public:
    SportPrinter(/* args */);
    ~SportPrinter();
    void Print();
};
#endif
