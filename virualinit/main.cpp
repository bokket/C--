//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;

class A
{
public:

protected:
    int _data;

};

class B:virtual public A
{
public:
    B(int i=0)
    {
        cout<<"B(int i)"<<endl;
        _data=i;
    }
};

class C:virtual public A
{
public:
    C(int i=0)
    {
        cout<<"C(int i)"<<endl;
        _data=i;
    }
};

class D: public C,B
{
public:
    D(int d)
        :C(1),B(2)
    {
        cout<<"D(int i)"<<endl;
        _data=d;
    }
    void dis()
    {
        cout<<_data<<endl;
    }
};
int main()
{
    D d(10);
    d.dis();
}