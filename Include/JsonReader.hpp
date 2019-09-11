#ifndef JSONREADER_HPP
#define JSONREADER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "json.hpp"
#include "Lista.hpp"
#include "Event.hpp"
class JsonReader
{
private:
    nlohmann::json file;

public:
    JsonReader();
    JsonReader(std::string pPath);
    ~JsonReader();
    bool cargarJson(std::string pPath);
    void transformJsonToList(Lista<Node<Event>> *pList);
    Event *transformJsonToEvent(nlohmann::json pEvent);
};
#endif