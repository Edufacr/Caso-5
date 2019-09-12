#include "TicketManager.hpp"
#include <iostream>
TicketManager::TicketManager(Lista<Node<Event>> *pEventList,ListaDCircular<DNode<Ticket>> *pTicketList,Lista<Node<IPrinter>>* pPrinterList)
{
    eventList = pEventList;
    ticketList = pTicketList;
    PrinterList = pPrinterList;
    
}

TicketManager::~TicketManager()
{
}
Ticket *TicketManager::GenerateTicket(Event *pEvent){

}

void TicketManager::RequestTicket(int pEvent,int pNumTickets, std::string name){
    if(pEvent < eventList->getSize()){
        while(pNumTickets > 0){
            ticketList->Add(new DNode<Ticket>(GenerateTicket((eventList->Search(pEvent))->getValue())));
        }
    }

}
void TicketManager::PrintTickets(){

}
