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

Node* DoubleLinkedList::initializeNode(string data,int id){
    Node* n = new Node(data,id);
    n->setNext(nullptr);
    n->setPrev(nullptr);
    return n;
}


Node* DoubleLinkedList::addElement(string data, int id){
    if(validateId(id)){
        return nullptr;
    }
    Node* n = initializeNode(data,id);
    if(isEmptyList()){
        first=n;
    }else {
        last->setNext(n);
        n->setPrev(last);
    }
    cont++;
    last = n;
    return n;
}

Node* DoubleLinkedList::addFirst(string data, int id){
    if(validateId(id)){
        return nullptr;
    }
    Node* n = initializeNode(data,id);
    if(isEmptyList()){
        first=n;
        last = n;
    }else{
        n->setNext(first);
        first->setPrev(n);
        first = n;
    }
    cont++;
    return n;
}

//check if the position is the first or the last
Node* DoubleLinkedList::addinPosition(string data, int id, int position){
    if(validatePosition(position)){
        if(validateId(id)){
            return nullptr;
        }
        Node* n = initializeNode(data,id);
        Node* temp = first;
        int j = 0;
        while (temp) {
            if(j==position){
                n->setNext(temp);
                n->setPrev(temp->getPrev());
                temp->getPrev()->setNext(n);
                temp->setPrev(n);
                cont++;
                return n;
            }
            temp = temp->getNext();
            j++;
        }
    }
    return nullptr;
}

bool DoubleLinkedList::validatePosition(int pos){
    if(pos >= cont || pos < 0){
        return false;
    }
    return true;
}


bool DoubleLinkedList::validateId(int id){
    Node* temp = first;
    while(temp){
        if(temp->getId() == id){
            return true;
        }
        temp = temp->getNext();
    }
    return false;
}

void DoubleLinkedList::showAll(){
    Node* temp = first;
    while(temp){
        cout<<"Soy el Nodo: " << temp->getValue()<<" mi posicion es :"<<temp<<endl;
        cout<<"Prev: "<<temp->getPrev()<<" Next: "<<temp->getNext()<<endl;
        temp = temp->getNext();
    }
}

//check if the position is the first or the last
bool DoubleLinkedList::deleteElement(int id){
    Node* temp = first;
    while(temp){
        if(temp->getId() == id){
            temp->getPrev()->setNext(temp->getNext());
            temp->getNext()->setPrev(temp->getPrev());
            cont--;
            return true;
        }
        temp = temp->getNext();
    }
    return false;
}

//check if the position is the first or the last
bool DoubleLinkedList::deletePosition(int pos){
    Node* temp = first;
    int j=0;
    if(!validatePosition(pos)){
        return false;
    }
    while(temp){
        if(j==pos){
            temp->getPrev()->setNext(temp->getNext());
            temp->getNext()->setPrev(temp->getPrev());
            cont--;
            return true;
        }
        temp = temp->getNext();
        j++;
    }
    return false;
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
