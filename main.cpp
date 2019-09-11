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
    l->Add(new Node<int>(point));
    l2->Add(new DNode<int>(point));

}
