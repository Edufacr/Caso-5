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
#endif