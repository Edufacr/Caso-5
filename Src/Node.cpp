#include "Node.hpp"
Node::Node(){
    next = nullptr;
    event = nullptr;
}

Node::Node(Event* pEvent)
{
    next = nullptr;
    event = pEvent;
}
Node::Node(Event* pEvent,Node* pNext){
    next = pNext;
    event = pEvent;
}
Node::~Node()
{
}
Node *Node::getNext()
{
    return next;
}
void Node::setNext(Node *pNode)
{
    next = pNode;
}
Event *Node::getEvent()
{
    return event;
}