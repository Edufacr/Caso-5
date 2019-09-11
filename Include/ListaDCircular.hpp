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

template <class N>
ListaDCircular<N>::ListaDCircular(/* args */): Lista<N>()
{
}
template <class N>
ListaDCircular<N>::~ListaDCircular()
{
}
template <class N>
void ListaDCircular<N>::Add(N* pNode){
    if(Lista<N>::IsEmpty()){
        Lista<N>::Add(pNode);
        pNode->setNext(pNode);
        pNode->setBefore(pNode);
    }
    else
    {
        pNode->setNext(Lista<N>::getFirst());
        pNode->setBefore(Lista<N>::getLast());
        //std::cout <<*pNode<<std::endl;
        Lista<N>::getFirst()->setBefore(pNode);
        Lista<N>::getLast()->setNext(pNode);
        Lista<N>::setFirst(pNode);
        Lista<N>::IncreaseSize();
    }
    
}
//template class ListaDCircular<DNode<int>>;
#endif
