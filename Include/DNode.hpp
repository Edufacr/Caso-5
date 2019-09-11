#ifndef DNODE_HPP
#define DNODE_HPP
#include "Node.hpp"
template <class V>
class DNode : public Node<V>
{
private:
    Node<V> *before;

public:
    DNode(V *pValue);
    DNode(V *pValue, Node<V> *pNext, Node<V> *pBefore);
    ~DNode();
    Node<V> *getBefore();
    void setBefore(Node<V>*);
};


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
#endif