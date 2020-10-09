//
// Created by bokket on 2020/10/9.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void swap(int *&i,int*& j)
{
    auto t=i;
    i=j;
    j=t;
}
int main()
{
    int i=1;
    int j=2;
    auto p1=&i;
    auto p2=&j;
    swap(p1,p2);
    cout<<*p1<<" "<<*p2<<endl;
}