#ifndef TICKET_HPP
#define TICKET_HPP
#include <string>
class Ticket
{
private:
    std::string name;
    std::string date;
    std::string type;
    std::string logo;
    std::string time;
    std::string person;
    int guid;
    std::string purchaseDate;
public:
    Ticket(/* args */);
    ~Ticket();
};
#endif