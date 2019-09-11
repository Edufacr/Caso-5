#ifndef LISTADCIRCULAR_HPP
#define LISTADCIRCULAR_HPP
#include "Lista.hpp"
#include "DNode.hpp"
template <class N>
class ListaDCircular: public Lista<N>{
private:
    /* data */
public:
    ListaDCircular(/* args */);
    ~ListaDCircular();
    void Add(N* pNode);
};
#endif

