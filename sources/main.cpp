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
        cout<<"C()"<<endl;
    }
    C(const C& another)
    {
        cout<<"C(const C& another)"<<endl;
    }

};

class A
{
public:
    A(int x=99)
    {
        cout<<"A()"<<endl;
        a=x;
    }

    A(const A& another)
    {
        this->a=another.a;
        cout<<"A(const A& another)"<<endl;
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
    B(const B& another)
        :A(another),c(another.c)
    {
        this->b=another.b;
        cout<<" B(const B& another)"<<endl;
    }
    int b;
    C c;
};

int main()
{
    B b(199,200);
    B bb(b);//199,200

    cout<<bb.a<<endl;
    cout<<bb.b<<endl;

}
