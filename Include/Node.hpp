#include "Event.hpp"
class Node
{
private:
    Node* next;
    Event* event;
public:
    Node();
    Node(Event* pEvent);
    Node(Event* pEvent,Node* pNext);
    ~Node();
    Node* getNext();
    void setNext(Node* pNode);
    Event *getEvent();
};


