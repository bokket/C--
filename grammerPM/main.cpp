//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;

class A
{
public:
    virtual void foo()
    {
        cout<<"A::foo()"<<endl;
    }
};


class B : public A
{
public:
   /* virtual void foo() override
    {
        cout<<"B::foo()"<<endl;
    }*/
   virtual void foo()override
   {
       cout<<"B::foo()"<<endl;
   }
};

int main()
{
    B b;
    A* pa=&b;
    pa->foo();
}