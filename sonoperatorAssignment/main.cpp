//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;


class C
{
public:
    C()
    {
        cout << "C()" << endl;
    }
    C &operator=(const C & another)
    {
        cout<<"C &operator=(const C & another)"<<endl;
        return *this;
    }
};

class A
{
public:
    A(int x)
        :a(x)
    {
        cout<<"A()"<<endl;
    }

    A& operator=(const A &another)
    {
        if(this==&another)
            return *this;
        this->a=another.a;
        cout<<"A& operator=(const A &another)"<<endl;
        return *this;
    }
    int a;
};
class B: public A
{
public:
    B(int x,int y)
        :A(x)
    {
        cout<<"B()"<<endl;
        b=y;
    }

    B& operator=(const B &another)
    {
        if(this==&another)
            return *this;
        A::operator=(another);
        c=another.c;
        cout<<"B& operator=(const B &another)"<<endl;
        this->b=another.b;
        return *this;
    }

    int b;
    C c;
};


int main()
{
   B b(1,2);
   B bb(3,4);
   b=bb;
   cout<<b.a<<b.b<<endl;
}