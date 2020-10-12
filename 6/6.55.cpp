//
// Created by bokket on 2020/10/12.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;
inline int f(const int, const int);
typedef decltype(f) fp;
inline int Add(const int n1, const int n2)  { return n1 + n2; }
inline int Sub(const int n1, const int n2)  { return n1 - n2; }
inline int Mul(const int n1, const int n2)  { return n1 * n2; }
inline int Div(const int n1, const int n2)  { return n1 / n2; }

vector<fp*> v{ Add,Sub,Mul,Div};
int main()
{
    for(auto i:v)
        cout<<i(2,2)<<endl;
    /*for (auto it = v.cbegin(); it != v.cend();it++)
        cout << (*it)(2, 2) << endl;*/
}
/*
#include <iostream>
#include <vector>
using namespace std;
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);

inline int fp(const int,const int);
decltype(fp) f;
int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}
vector<f*> v{add,subtract,multiply,divide};
int main()
{
    for(auto i=v.cbegin();i!=v.cend();i++)
        cout<<(*i)(2,2)<<endl;
}*/