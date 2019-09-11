#include <iostream>
#include <fstream>
#include <string>
#include "json.hpp"
#include "TicketManager.hpp"
#include "ListaDCircular.hpp"
#include "Lista.hpp"
#include "JsonReader.hpp"
int main(int argc, char const *argv[])
{
    Lista<Node<int>>* l = new Lista<Node<int>>();
    ListaDCircular<DNode<int>>* l2 = new ListaDCircular<DNode<int>>();
    int num = 2;
    int* point =& num;
    int num2 = 4;
    int* point2 =& num2;
    l2->Add(new DNode<int>(point));
    l2->Add(new DNode<int>(point2));
    Node<int>* tmp = l->getFirst();
    DNode<int> *tmp2 = l2->getFirst();
    
}
