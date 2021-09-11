#include <iostream>
#include "Person.hh"
#include "Node.hh"

int main ()
 {
    Person* person1{new Person(2, "Alfonso", new Job("Developer", 15000.f, IT), none)};

    Node* node1{new Node(new Person(2, "Alfonso", new Job("Developer", 15000.f, IT), none))};
    Node* node2{new Node(new Person(2, "Oscar", new Job("Developer", 18000.f, IT), male))};
    Node* node3{new Node(new Person(2, "Adriana", new Job("Frontend", 16000.f, Design), female))};
    Node* node4{new Node(new Person(2, "Gabriela", new Job("Frontend", 20000.f, Sales), female))};

     node1->nextNode = node2;
     node2->nextNode = node3;
     node3->nextNode = node4;

     //std::cout << node1->Getperson()->GetName() << std::endl;
     //std::cout << node1->nextNode->Getperson()->GetName() << std::endl;
     //std::cout << node1->nextNode->nextNode->Getperson()->GetName() << std::endl;
     
     Node* currentNode{node1};
     std::cout << "Persons list" << std:: endl;
     while(currentNode)
     {
         std::cout << "Person name: " << currentNode->Getperson()->GetName() << std:: endl;
         std::cout << "Person job:" << currentNode->Getperson()->GetJob()->GetName()<< std::endl;
         std::cout << "Person salary:" << currentNode->Getperson()->GetJob()->GetSalary() << std:: endl;
         std::cout << "Person job area:" << currentNode->Getperson()->GetJob()->GetJobAreaStr() << std:: endl;
         std::cout << std:: endl;
         std::cout << std:: endl;
         currentNode = currentNode->nextNode;
     }

     /*std::cout <<person1 ->GetName() << std::endl;
     std::cout <<person1 ->GetArmsCount() << std::endl;
     std::cout <<person1 ->GetGenderStr() << std::endl;
     std::cout << "Job details:" << std::endl;
     std::cout << person1->GetJob()->GetName() << std::endl;
     std::cout << person1->GetJob()->GetJobAreaStr() << std::endl;
     std::cout << person1->GetJob()->GetSalary() << std::endl;
     delete person1;*/

     std::cin.get();
     return 0;
 }