#include "ListaDCircular.hpp"

ListaDCircular::ListaDCircular(/* args */)
{

}

ListaDCircular::~ListaDCircular()
{
}

void ListaDCircular::Add(Event* event){
    setFirst(new DNode(event,getFirst(),getLast()));
}