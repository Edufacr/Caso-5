#ifndef JSONREADER_HPP
#define JSONREADER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "json.hpp"
class JsonReader
{
    nlohmann::json file;

private:
    
public:
    JsonReader();
    ~JsonReader();
    bool cargarJson(std::string pName);
    void transformJsonToList();
};
#endif