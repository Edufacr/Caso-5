#ifndef EVENT_HPP
#define EVENT_HPP
#include <string>
class Event
{
private:
    /* data */
    std::string name;
    std::string date;
    std::string type;
    std::string logo;
    std::string time;

public:
    Event(/* args */);
    Event(std::string pName,std::string pDate,std::string pType,std::string pLogo, std::string pTime);
    ~Event();
    std::string getName();
    std::string getDate();
    std::string getType();
    std::string getLogo();
    std::string getTime();
    std::string ToString();

    /*void setName();
    void setDate();
    void setType();
    void setLogo();
    void setTime();*/
};
#endif


