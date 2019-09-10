#include "Lista.hpp"

    void Lista::Clean(){

    }
    bool Lista::IsEmpty(){
        return size == 0;
    }
    void Lista::Add(Event* event){
        first = new Node(event,first);
    }
    Node* Lista::Search(){
        
    }

    void Lista::setFirst(Node* pNode){
        first = pNode;
    }
    Node* Lista::getFirst(){
        return first;
    }
    Node* Lista::getLast(){
        return last;
    }
    void Lista::setLast(Node* pNode){
        last = pNode;
    }