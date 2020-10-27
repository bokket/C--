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
typedef void (*pfun)(void);
int main()
{
    Base b;
    cout<<sizeof(Base)<<endl;
    cout<<sizeof(b)<<endl;

    cout<<"&b:"<<&b<<endl;
   // cout<<"virtual:"<<(void**)*(int*)(&b)<<endl;

    //cout<<"virtual 0"<<*((void**)*(int*)(&b)+0)<<endl;
    //cout<<"virtual 1"<<*((int**)*(int*)(&b)+1)<<endl;
    //cout<<"virtual 2"<<*((int**)*(int*)(&b)+2)<<endl;
    //cout<<"virtual 3"<<*((int**)*(int*)(&b)+3)<<endl;
    pfun pf=(pfun)*((Base**)*(int*)(&b)+0);
    pf();


}
