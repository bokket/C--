//
// Created by bokket on 2020/10/24.
//

#include <iostream>
using namespace std;


class A
{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};

class B: public A
{
public:
    void func()
    {
        cout<<pub<<endl;
        cout<<pro<<endl;
        //cout<<pri<<endl;
    }
    /*void func()
    {
        cout<<pubb<<prob<<prib<<endl;
    }*/
    int pubb;
protected:
    int prob;
private:
    int prib;

};


class C: public B
{
public:
    void foo()
    {
        cout<<pro<<endl;
    }
};
int main()
{
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    cout<<sizeof(C)<<endl;
   /* B b;
    b.pubb;
    b.prob;
    b.prib;*/
}