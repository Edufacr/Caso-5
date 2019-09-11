#ifndef LISTA_HPP
#define LISTA_HPP
#include "Node.hpp"
template <class N>
class Lista
{
private:
    N* first;
    N* last;
    int size;
public:
    Lista(/* args */);
    ~Lista();
    void setFirst(N* pNode);
    N* getFirst();
    N* getLast();
    void setLast(N* pNode);
    void Clean();
    bool IsEmpty();
    void Add(N* pNode);
    N* Search();
    void IncreaseSize();
    int getSize();
};


template <class N>
Lista<N>::Lista(/* args */)
{
    first = nullptr;
    last = nullptr;
    size = 0;
}

template <class N>
Lista<N>::~Lista()
{
}

template <class N>
void Lista<N>::Clean()
{
}

template <class N>
bool Lista<N>::IsEmpty()
{
    return size == 0;
}

template <class N>
void Lista<N>::Add(N *pNode)
{
    if (IsEmpty())
    {
        first = pNode;
        last = pNode;
    }
    else
    {
        pNode->setNext(first);
        first = pNode;
    }
    size++;
}
template <class N>
N *Lista<N>::Search()
{
}

template <class N>
void Lista<N>::setFirst(N *pNode)
{
    first = pNode;
}

template <class N>
N *Lista<N>::getFirst()
{
    return first;
}

template <class N>
N *Lista<N>::getLast()
{
    return last;
}

template <class N>
void Lista<N>::setLast(N *pNode)
{
    last = pNode;
}

template <class N>
void Lista<N>::IncreaseSize()
{
    size++;
}
template <class N>
int Lista<N>::getSize(){
    return size;
}
//template class Lista<Node<int>>;
#endif

