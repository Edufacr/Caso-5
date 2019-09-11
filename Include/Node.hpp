#ifndef NODE_HPP
#define NODE_HPP
template <class V>
class Node
{
private:
    Node<V> *next;
    V *value;

public:
    Node();
    Node(V *pValue);
    Node(V *pValue, Node<V> *pNext);
    ~Node();
    Node<V> *getNext();
    void setNext(Node<V> *pNode);
    V *getValue();
};

template <class V>
Node<V>::Node()
{
    next = nullptr;
    value = nullptr;
}

template <class V>
Node<V>::Node(V *pValue)
{
    next = nullptr;
    value = pValue;
}

template <class V>
Node<V>::Node(V *pValue, Node<V> *pNext)
{
    next = pNext;
    value = pValue;
}

template <class V>
Node<V>:: ~Node()
{
}

template <class V>
Node<V> *Node<V>:: getNext()
{
    return next;
}

template <class V>
void Node<V>::setNext(Node<V> *pNode)
{
    next = pNode;
}

template <class V>
V *Node<V>::getValue()
{
    return value;
}
//template class Node<int>;
#endif