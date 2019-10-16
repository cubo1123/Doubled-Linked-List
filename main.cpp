
#include<iostream>
#include "DoubleLinkedList.h"
using namespace std;

int main()
{
    int choice = 1;
    DoubleLinkedList doubleLinkedList;
    string data;
    int id;
    doubleLinkedList.addElement("A",1);
    doubleLinkedList.addElement("AB",11);
    doubleLinkedList.addElement("ABC",112);
    doubleLinkedList.addElement("ABCD",1123);
    doubleLinkedList.addElement("ABCDE",11235);
    doubleLinkedList.addFirst("EL PINCHES PRIMERO",111);
    doubleLinkedList.showAll();

    cout<<"Cool"<<endl;

    cout<<doubleLinkedList.search("ABC",112)<<endl;
    cout<<"Cool"<<endl;
    cout<<doubleLinkedList.search("ABCDEFGHI",11235813)<<endl;
    cout<<"Cool"<<endl;
    /*
    while(choice != -1)
    {
        cout<< "1.InsertFirst" << endl;
        cout<< "2. InsertLast" << endl;
        cout<< "3. InsertAfter" << endl;
        cout<< "4.DeleteFirst" << endl;
        cout<< "5. DeleteLast" << endl;
        cout<< "6.SearchItem" << endl;
        cout<< "7. PrintList" << endl;
        cout<< "8. DeleteItem" << endl;
        cout<< "9. Exit" << endl;
        cin>>choice;

        switch(choice){
            case -1:
                return 0;
            break;
            case 1:
                cout<<"Ingrese la data a agregar";
                cin>>data;
                cout<<"Ingrese el id";
                cin>>id;
                doubleLinkedList.addElement(data,id);
            break;

            case 2:
                doubleLinkedList.showAll();
            break;

            case 3:
                int old,newitem;
                cout<<"Ingrese el id del anterior";
                cin>>old;
                cout<<"Ingrese el id del nuevo";
                cin>>newitem;
                cout<<"Ingrese la data a agregar";
                cin>>data;
                insertAfter(old,newitem,data);
                printList();
            break;
            case 4:
                deleteFirst();
                printList();
            break;
            case 5:
                deleteLast();
                printList();
            break;
            case 6:
                int id;
                cout<<"Ingrese el id a buscar";
                cin>>id;
                node* ans = searchItem(id);
                if(ans!=NULL) cout<<"FOUND "<<ans->value<<endl;
                else cout<<"NOT FOUND"<<endl;
            break;
            case 7:
                printList();
            break;
            case 8:
                int id;
                cin>>id;
                deleteItem(id);
                printList();
            break;
            default:
                cout << "Ingrese una opcion valida" <<endl;
            break;

        }

    }*/
return 0;
}
