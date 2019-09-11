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
#endif