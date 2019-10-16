#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include<Node.h>


class DoubleLinkedList
{
public:
    DoubleLinkedList();
    bool isEmptyList();
    bool addElement(string data, int id);
    bool addFirst(string data, int id);
    bool addLast();
    void showAll();
    Node* search(string data,int id);
    int getSize();
private:
    int cont;
    Node* first;
    Node* last;


};

#endif // DOUBLELINKEDLIST_H
