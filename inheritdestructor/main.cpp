//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;

class A
{
public:

    A()
    {
        cout<<"A ()"<<endl;
    }
    ~A()
    {
        cout<<"~A ()"<<endl;
    }
};

class Base
{
public:

    Base()
    {
        cout<<"Base ()"<<endl;
        p=new char[100];
    }
    ~Base()
    {
        cout<<"~Base ()"<<endl;
        delete[] p;
    }

private:
    char *p;
};

class Derive: public Base
{
public:
    Derive()
    {
        cout<<"Derive ()"<<endl;
        q=new char[200];
    }
    ~Derive()
    {
        cout<<"~Device ()"<<endl;
        delete[] q;
    }

private:
    A a;
    char* q;
};
int main()
{
    Derive d;

}