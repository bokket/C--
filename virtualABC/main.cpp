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
};

class C: public B
{
public:
    virtual void foo()
    {
        cout<<"C::foo"<<endl;
    }
};

int main()
{
    C c;
    A *pd=&c;
    pd->foo();


}