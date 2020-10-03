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
    int a[10];
    int i;

    for(auto i=0;i<10;i++)
        a[i]=i;
    for(auto s:a)
        cout<<s<<" ";
    cout<<endl;
}
