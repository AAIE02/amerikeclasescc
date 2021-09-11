#pragma once
#include "Person.hh"
class Node
{
    private:
    Person* person;
public:
    Node* nextNode = nullptr; //Aqui sirve para conectarse a otro nodo

     Node(Person* person, Node* node);
     Node(Person* person);
     Person* Getperson();
    ~Node();
};

