#ifndef NODE_H
#define NODE_H
#include<iostream>

using namespace std;
class Node
{
public:
    Node* next;
    Node* prev;
    string value;
    int id;
};
#endif
