#ifndef LISTA_HPP
#define LISTA_HPP
#include "Node.hpp"
template <class N>
class Lista
{
private:
    N* first;
    N* last;
    int size;
public:
    Lista(/* args */);
    ~Lista();
    void setFirst(N* pNode);
    N* getFirst();
    N* getLast();
    void setLast(N* pNode);
    void Clean();
    bool IsEmpty();
    void Add(N* pNode);
    N* Search();
    void IncreaseSize();
};

#endif

