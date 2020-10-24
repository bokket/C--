//
// Created by bokket on 2020/10/24.
//

#include <iostream>
using namespace std;

class C
{
public:
    C(int k)
    {
        cout << "C()" << endl;
        c=k;
    }
    int c;
};

class A
{
public:
    A(int i)
    {
        cout<<"A()"<<endl;
        a=i;
    }
    void foo()
    {
        cout<<"Abc"<<endl;
    }
    int a;
};
class B: public A
{
public:
    B(int i,int j,int k)
        :A(i),c(k)
    {
        cout<<"B()"<<endl;
        b=5;

       // b=5;
    }
    int b;
    C c;
};


int main()
{
    B b(3,5,10);
    //b.foo();
    cout<<b.a<<endl;
    cout<<b.b<<endl;
    cout<<b.c.c<<endl;
    //cout<<b.c<<endl;
}