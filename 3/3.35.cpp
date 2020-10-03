//
// Created by bokket on 2020/10/3.
//

#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <iterator>
using std::vector;
using std::cout;
using std::string;
using std::cin;
using std::endl;
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=begin(a);
    int *t=end(a);
    for(auto s:a)
        cout<<s<<" ";
    cout<<endl;
    while(p!=t)
    {
        *p=0;
        p++;
    }
    for(auto s:a)
        cout<<s<<" ";
    cout<<endl;

}