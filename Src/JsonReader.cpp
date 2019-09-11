#include "JsonReader.hpp"

JsonReader::JsonReader(){
}
JsonReader::JsonReader(std::string pPath){
    cargarJson(pPath);
}
JsonReader::~JsonReader(){
    
}

bool JsonReader::cargarJson(std::string pPath){
    std::ifstream myfile(pPath);
    if (myfile.is_open())
    {
        myfile >> file;
        myfile.close();
        return true;
    }
    else
        std::cout << "Unable to open file"<<std::endl;
        return false;
}

void JsonReader::transformJsonToList(Lista<Node<Event>> *pList){
    nlohmann::json *j = &(file["eventos"]);

    for (int i = 0; i < j->size(); i++)
    {
        pList->Add(new Node<Event>(transformJsonToEvent(j[0][i])));
    }
    
}

Event *JsonReader::transformJsonToEvent(nlohmann::json pEvent){
    return new Event(pEvent["nombre"],pEvent["fecha"],pEvent["tipo"],pEvent["logo"],pEvent["hora"]);
}
