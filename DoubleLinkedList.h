#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include<Node.h>


class DoubleLinkedList
{
public:
    DoubleLinkedList();
    Node* addElement(string data, int id);
    Node* addFirst(string data, int id);
    Node* addinPosition(string data, int id, int position);

    bool deleteElement(int id);
    bool deletePosition(int pos);

    bool updateElement(int id);

    void showAll();
    Node* search(string data,int id);
    bool isEmptyList();
    bool validatePosition(int pos);
    Node* initializeNode(string data,int id);

    bool validateId(int id);
    int getSize();

private:
    int cont;
    Node* first;
    Node* last;
};

#endif // DOUBLELINKEDLIST_H
