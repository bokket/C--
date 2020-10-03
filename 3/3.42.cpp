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
    vector<int>a={1,2,3,4,5};
    int b[5];
    int j=0;
    auto i=a.begin();
    auto k=a.end();
    for(auto m:a)
        cout<<m<<" ";
    cout<<endl;
    for(j=0;i!=k;i++,j++)
        b[j]=*i;

    for(auto s:b)
        cout<<s<<" ";
    cout<<endl;
}