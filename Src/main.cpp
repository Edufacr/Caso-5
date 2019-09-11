#include <iostream>
#include <fstream>
#include <string>
#include "json.hpp"
#include "TicketManager.hpp"
#include "ListaDCircular.hpp"
#include "Lista.hpp"
#include "JsonReader.hpp"
int main(int argc, char const *argv[])
{
    JsonReader json("./Files/events.json");
    Lista<Node<Event>>* listaEventos = new Lista<Node<Event>>();
    json.transformJsonToList(listaEventos); 
    listaEventos->Print();
}
