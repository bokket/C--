//
// Created by bokket on 2020/10/27.
//

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void f(){cout<<"Base::f()"<<endl;}
    virtual void g(){cout<<"Base::g()"<<endl;}
    virtual void h(){cout<<"Base::h()"<<endl;}

private:
    int a;
};

class Derive: public Base
{
    virtual void f1(){cout<<"Base::f1()"<<endl;}
    virtual void g1(){cout<<"Base::g1()"<<endl;}
    virtual void h1(){cout<<"Base::h1()"<<endl;}
};

int main()
{
    Derive b;
    
}