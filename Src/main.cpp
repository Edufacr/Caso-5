#include <iostream>
#include <fstream>
#include <string>
#include "json.hpp"
#include "TicketManager.hpp"
#include "ListaDCircular.hpp"
#include "Lista.hpp"
#include "JsonReader.hpp"
#include "SportPrinter.hpp"
#include "FestivalPrinter.hpp"
#include "ConcertPrinter.hpp"
int main(int argc, char const *argv[])
{
    JsonReader json("./Files/events.json");
    Lista<Node<Event>>* listaEventos = new Lista<Node<Event>>();
    json.transformJsonToList(listaEventos); 

    Lista<Node<IPrinter>>* printerList = new Lista<Node<IPrinter>>();
    printerList->Add(new Node<IPrinter>(new SportPrinter()));
    printerList->Add(new Node<IPrinter>(new FestivalPrinter()));
    printerList->Add(new Node<IPrinter>(new ConcertPrinter()));
    

    TicketManager* manager = new TicketManager(listaEventos,new ListaDCircular<DNode<Ticket>>(),printerList);
    int input;
    while (true)
    {
        std::cout << "Press 0 to Exit"<<std::endl;
        listaEventos->Print();
        std::cin >> input;
        if(input == 0)
            break;
        else
        {
            
        }
        
    }
    
}
