#ifndef TICKETMANAGER_HPP
#define TICKETMANAGER_HPP
#include "Lista.hpp"
#include "Event.hpp"
#include "Ticket.hpp"
class TicketManager
{
private:
    //Lista<Event> *eventList;
    //ListaDCircular<Ticket> *ticketList;
   // ListaDCircular<Ticket> *toPrintList;

public:
    TicketManager(/* args */);
    ~TicketManager();
    Ticket *GenerateTicket(Event *pEvent);
};
#endif
