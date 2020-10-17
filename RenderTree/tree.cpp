//
// Created by bokket on 2020/10/17.
//
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class CCCSripte{

public:
    CCCSripte(){}
    static CCCSripte* create()
    {
        CCCSripte* p=new CCCSripte;
        if(p && p->init())
        {
            p->autoReal();
            return p;
        }
        else
        {
            delete p;
            p=NULL;
        }
    }
    void autoReal()
    {
        if(head==NULL)
        {
            this->next=head;
            head=this;
        }
        else
        {
            this->head;
            head=this;
        }
    }
    bool init()
    {
        cout<<"init"<<endl;
        data=rand()%(127-32)+33;
        return true;
    }
    static void renderTree()
    {
        CCCSripte *t=head;
        while(t)
        {
            cout<<t->data<<endl;
            t=t->next;
        }
    }
private:
    static CCCSripte *head;
    CCCSripte* next;
    int data;
};
CCCSripte* CCCSripte::head=NULL;

int main()
{
    srand(time(NULL));
    CCCSripte *ps=CCCSripte::create();
    CCCSripte *ps2=CCCSripte::create();
    CCCSripte *ps3=CCCSripte::create();
    ps->renderTree();
    CCCSripte::renderTree();
    ps3->renderTree();
}