#include <string>
#include <iostream>
#include <fstream>
#include "Include/nlohmann/json.hpp"
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
