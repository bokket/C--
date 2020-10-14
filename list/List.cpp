//
// Created by bokket on 2020/10/13.
//

#include "List.h"
#include <iostream>
using namespace std;

List::List() {
    head=new Node;
    head->next=NULL;
}
List::~List() {
    Node* t;
    while(head)
    {
        t=head;
        head=head->next;

        delete t;
        t=head;
    }
}

/*List* List::createList()
{
    head=new Node;
    head->next=NULL;
}*/
void List::insertList(int d)
{
    Node* cur=new Node;
    cur->data=d;

    cur->next=head->next;
    head->next=cur;
}
void List::print()
{
    Node* ph=head->next;

    while(ph!=NULL)
    {
        cout<<ph->data<<endl;
        ph=ph->next;
    }
}