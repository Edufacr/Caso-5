#include "DNode.hpp"

template <class V>
DNode<V>::DNode(V *pValue, Node<V> *pNext, Node<V> *pBefore) : Node<V>(pValue, pNext)
{
    before = pBefore;
}

template <class V>
DNode<V>::DNode(V *pValue):Node<V>(pValue)
{
    
}

template <class V>
DNode<V>::~DNode()
{
}

template <class V>
Node<V> *DNode<V>::getBefore()
{
    return before;
}

template <class V>
void DNode<V>::setBefore(Node<V> *pBefore)
{
    before = pBefore;
}
//template class DNode<int>;