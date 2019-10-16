#include "Node.h"


Node::Node(string data, int id)
{
    this->value = data;
    this->id = id;
}

Node *Node::getNext() const
{
return next;
}

void Node::setNext(Node *value)
{
next = value;
}

Node *Node::getPrev() const
{
return prev;
}

void Node::setPrev(Node *value)
{
prev = value;
}

string Node::getValue() const
{
return value;
}

void Node::setValue(const string &value)
{
 this->value = value;
}

int Node::getId() const
{
return id;
}
