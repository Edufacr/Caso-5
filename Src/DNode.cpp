#include "DNode.hpp"
DNode::DNode(Event* pEvent,Node* pNext, Node* pBefore){
    Node(pEvent,pNext);
    before = pBefore;
}

DNode::DNode(Event* pEvent)
{
    Node(pEvent);
}

DNode::~DNode()
{
}

Node* DNode::getBefore(){
    return before;
}