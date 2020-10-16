//
// Created by bokket on 2020/10/16.
//

#include <iostream>
using namespace std;

namespace Space
{
    int share=111;
}

class A
{
public:
    void func()
    {
        cout<<share<<endl;
    }

    void modify(int m)
    {
        share=m;
    }


    int x,y;
    static int share;
private:

};
int A::share=0;


int main()
{
    A a,b,c;
    cout<<"sizeof(A)="<<sizeof(A);
    cout<<"sizeof(a)="<<sizeof(a);
    cout<<"sizeof(b)="<<sizeof(b);
    cout<<"sizeof(c)="<<sizeof(c)<<endl;
   /* a.func();
    a.modify(200);
    c.func();
    b.func();*/

    cout<<A::share<<endl;

    a.func();

    cout<<Space::share<<endl;
    A d;
    d.func();
}