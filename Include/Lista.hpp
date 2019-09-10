#include "Node.hpp"

class Lista
{
private:
    Node* first;
    Node* last;
    int size;
public:
    Lista(/* args */);
    ~Lista();
    void setFirst(Node* pNode);
    Node* getFirst();
    Node* getLast();
    void setLast(Node* pNode);
    void Clean();
    bool IsEmpty();
    void Add(Event* event);
    Node* Search();

};


Lista::Lista(/* args */)
{
}

Lista::~Lista()
{
}
