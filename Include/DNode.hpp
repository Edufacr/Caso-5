#include "Node.hpp"
class DNode:Node
{
private:
    Node* before;
public:
    DNode(Event* pEvent);
    DNode(Event* pEvent,Node* pNext, Node* pBefore);
    ~DNode();
    Node* getBefore();
};


