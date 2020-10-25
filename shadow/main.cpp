//
// Created by bokket on 2020/10/25.
//

#include <iostream>

using namespace std;

class A
{

public:
    void foo()
    {
        cout<<"A::void foo()"<<endl;
    }
    A &operator=(const A& another)
};

class B: public A
{
public:
    void func()
    {
        cout<<"B::void foo()"<<endl;
        foo();
    }
};


int main()
{
    B b;
    b.func();
}
