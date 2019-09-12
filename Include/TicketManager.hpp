#ifndef TICKETMANAGER_HPP
#define TICKETMANAGER_HPP
#include "Lista.hpp"
#include "ListaDCircular.hpp"
#include "Event.hpp"
#include "Ticket.hpp"
#include "Node.hpp"
#include "IPrinter.hpp"
class TicketManager
{
private:
    Lista<Node<Event>> *eventList;
    ListaDCircular<DNode<Ticket>> *ticketList;
    Lista<Node<IPrinter>>* PrinterList;
public:
    TicketManager(Lista<Node<Event>> *pEventList,ListaDCircular<DNode<Ticket>> *pTicketList,Lista<Node<IPrinter>>* pPrinterList);
    ~TicketManager();
    Ticket *GenerateTicket(Event *pEvent);
    void PrintTickets();
    void RequestTicket(int pEvent,int pNumTickets, std::string name);
};
#endif
