//
// Created by bokket on 2020/10/28.
//

#include <iostream>
using namespace std;

template<typename T>
void Swap(T & a,T2 & b)
{
    T t=a;
    a=b;
    b=t;
}
/*
void Swap(double &a,double &b)
{
    double t=a;
    a=b;
    b=t;
}*/

int main()
{
    float a=4;
    long b=5;

    cout<<a<<b<<endl;
    Swap(a,b);
    cout<<a<<b<<endl;
}