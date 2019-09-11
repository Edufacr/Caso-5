#include "JsonReader.hpp"

JsonReader::JsonReader(){
}
JsonReader::~JsonReader(){
    
}

bool JsonReader::cargarJson(std::string pName){
    std::ifstream myfile(pName);
    if (myfile.is_open())
    {
        myfile >> file;
        myfile.close();
        return true;
    }
    else
        std::cout << "Unable to open file";
        return false;
}

void JsonReader::transformJsonToList(){
    nlohmann::json j = file["eventos"];
    for (int i = 0; i < j.size(); i++)
    {
        j[i]; //add to list
    }
    
}