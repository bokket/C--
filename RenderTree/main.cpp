//
// Created by bokket on 2020/10/17.
//
#include <iostream>
using namespace std;

class CCCSprite
{
public:
    CCCSprite(int d)
    {
        data=d;
        if(head==NULL) {
            this->next = NULL;
            head = this;
        }
        else
        {
            this->next=head;
            head=this;
        }
    }
    void travCCSprite()
    {
        CCCSprite* ph=head;
        while(ph!=NULL)
        {
            cout<<ph->data<<endl;
            ph=ph->next;
        }
    }
    static void deleCCSprite()
    {
        CCCSprite* t=head;
        while(head)
        {
            head=head->next;
            delete t;
            t=head;
        }
    }
private:
    int data;
    CCCSprite *next;
    static CCCSprite* head;
};

CCCSprite* CCCSprite::head=NULL;

int main()
{
    CCCSprite a(1),b(2),c(3);
    a.travCCSprite();
    CCCSprite::travCCSprite();

    new CCCSprite(4);

    for(int i=100;i<106;i++)
        new CCCSprite(i);

    CCCSprite::travCCSprite();

    CCCSprite::deleCCSprite();
}
