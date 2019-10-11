#include "DoubleLinkedList.h"
#include <Node.h>

DoubleLinkedList::DoubleLinkedList(){
}

void DoubleLinkedList::insertFirst(string element,int id){
    Node *newItem;
    newItem=new Node;
    newItem->value=element;
    newItem->id = id;
    if(head==NULL)
    {
        head=newItem;
        newItem->prev=NULL;
        newItem->next=NULL;
        tail=newItem;
    }
    else
    {
        newItem->next=head;
        newItem->prev=NULL;
        head->prev=newItem;
        head=newItem;
    }
}

void DoubleLinkedList::insertLast(string element,int id){
    Node *newItem;
    newItem=new Node;
    newItem->value=element;
    newItem->id = id;
    if(head==NULL)
    {
        head=newItem;
        newItem->prev=NULL;
        newItem->next=NULL;
        tail=newItem;
    }
    else
    {
        newItem->prev=tail;
        tail->next=newItem;
        newItem->next=NULL;
        tail=newItem;
    }
}

void DoubleLinkedList::insertAfter(int old, int id, string element)
{
    Node* newItem;
    newItem=new Node;
    Node* temp;
    temp=head;
    if(head==NULL)
    {
        cout<<"could not insert"<<endl;
        return;
    }

    newItem->value=element;
    newItem->id = id;

    if(head==tail)
    {
        if(head->id!=old)
        {
            cout<<"could not insert"<<endl;
            return;
        }
        head->next=newItem;
        newItem->next=NULL;
        head->prev=NULL;
        newItem->prev=head;
        tail=newItem;
        return;
    }
    if(tail->id==id)
    {
        newItem->next=NULL;
        newItem->prev=tail;
        tail->next=newItem;
        tail=newItem;
        return;
    }
    while(temp->id!=old)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            cout<<"Could not insert"<<endl;
            cout<<"element not found"<<endl;
            return;
        }
    }

    newItem->next=temp->next;
    newItem->prev=temp;
    temp->next->prev=newItem;
    temp->next=newItem;
}

void DoubleLinkedList::deleteFirst()
{
    if(head==NULL)
    {
        return;
    }
    if(head==tail)///one element in the list
    {
        Node* cur;
        cur=head;
        head=NULL;
        tail=NULL;
        delete cur;
        return;
    }
    else
    {
        Node* cur;
        cur=head;
        head=head->next;
        head->prev=NULL;
        delete cur;
    }
}

void DoubleLinkedList::deleteLast()
{
    if(head==NULL) return;
    if(head==tail)
    {
        Node* cur;
        cur=head;
        head=NULL;
        tail=NULL;
        delete cur;
        return;
    }
    else
    {
        Node* cur;
        cur=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete cur;
    }
}

void DoubleLinkedList::deleteItem(int id)
{
    Node* temp;
    temp=head;
    if(head==tail)
    {
        if(head->id!=id)
        {
            cout<<"could not delete"<<endl;
            return;
        }
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    if(head->id==id)
    {
        head=head->next;
        head->prev=NULL;
        delete temp;
        return;
    }
    else if(tail->id==id)
    {
        temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
        return;
    }
    while(temp->id!=id)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            cout<<"element not found"<<endl;
            return;
        }
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
}

Node* DoubleLinkedList::searchItem(int id)
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->id==id)
        {
            return temp;
            break;
        }
        temp=temp->next;
    }
    return NULL;
}

void DoubleLinkedList::printList()
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->id <<endl;
        temp=temp->next;
    }
}

