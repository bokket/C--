//
// Created by bokket on 2020/10/3.
//
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
using std::vector;
using std::cout;
using std::string;
using std::cin;
using std::endl;
int main()
{
    int a[10],b[10];
    int i;

    for(auto i=0;i<10;i++)
        a[i]=i;
    for(auto s:a)
        cout<<s<<" ";
    cout<<endl;

    for(auto i=0;i<10;i++)
        b[i]=a[i];

    for(auto s:b)
        cout<<"arry:"<<s<<" ";
    cout<<endl;

    vector<int>c (10);
    for(i=0;i<10;i++)
        c[i]=a[i];
    vector<int>d (c);
    for(auto s:d)
        cout<<s<<" ";
    cout<<endl;


}
