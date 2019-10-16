#ifndef NODE_H
#define NODE_H
#include<iostream>

using namespace std;
class Node
{
public:
    Node();
    Node(string data, int id);
    ~Node();

    Node *getNext() const;
    void setNext(Node *value);

    Node *getPrev() const;
    void setPrev(Node *value);

    string getValue() const;
    void setValue(const string &value);

    int getId() const;

private:
    Node* next;
    Node* prev;
    string value;
    int id;

    
    
};

#endif

