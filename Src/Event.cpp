#include "Event.hpp"
Event::Event(/* args */)
{
}
Event::~Event()
{
}
Event::Event(std::string pName, std::string pDate, std::string pType, std::string pLogo, std::string pTime)
{
    name = pName;
    date = pDate;
    type = pType;
    logo = pLogo;
    time = pTime;
}
std::string Event::getName()
{
    return name;
}
std::string Event::getDate()
{
    return date;
}
std::string Event::getType()
{
    return type;
}
std::string Event::getLogo()
{
    return logo;
}
std::string Event::getTime()
{
    return time;
}
std::string Event::ToString(){
    return name;
}
