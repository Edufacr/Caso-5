#include "Lista.hpp"
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
//template class Lista<Node<int>>;