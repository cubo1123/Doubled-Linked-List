#include "DoubleLinkedList.h"
#include <Node.h>

DoubleLinkedList::DoubleLinkedList(){
    first=nullptr;
    last=nullptr;
    cont=0;
}


bool DoubleLinkedList::isEmptyList(){
    return first == nullptr;
}

bool DoubleLinkedList::addElement(string data, int id){
    Node* n = new Node(data,id);
    n->setNext(nullptr);
    n->setPrev(nullptr);
    if(first==nullptr){
        first=n;
    }else {
        last->setNext(n);
        n->setPrev(last);
        n->setNext(nullptr);
    }
    cont++;
    last = n;
    return true;
}

bool DoubleLinkedList::addFirst(string data, int id){
    Node* n = new Node(data,id);
    n->setNext(nullptr);
    n->setPrev(nullptr);
    if(first==nullptr){
        first=n;
        last = n;
    }else{
        n->setNext(first);
        first->setPrev(n);
        first = n;
    }
    cont++;
    return true;
}

bool DoubleLinkedList::addLast(string data, int id){
    Node* n = new Node(data,id);
    n->setNext(nullptr);
    n->setPrev(nullptr);

}

void DoubleLinkedList::showAll(){
    Node* temp = first;
    while(temp){
        cout<<"Soy el Nodo: " << temp->getValue()<<" mi posicion es :"<<temp<<endl;
        cout<<"Prev: "<<temp->getPrev()<<" Next: "<<temp->getNext()<<endl;
        temp = temp->getNext();
    }
}

int DoubleLinkedList::getSize(){
    return cont;
}

Node *DoubleLinkedList::search(string data, int id){
    Node* temp = first;
    while(temp){
        if(temp->getValue() == data && temp->getId() == id){
            return temp;
        }
        temp=temp->getNext();
    }
}
