#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include<Node.h>


class DoubleLinkedList
{
public:
    DoubleLinkedList();
    int cont;
    Node* first;
    Node* last;
    bool isEmptyList();


};

#endif // DOUBLELINKEDLIST_H
