//
// Created by bokket on 2020/10/9.
//
#include <iostream>
#include <initializer_list>
#include <vector>
using namespace std;
int sum(initializer_list<int> a)
{
    int s=0;
    for(auto &i:a)
        s+=i;
    return s;
}
int main()
{
    auto a={1,2,3,4,5,6,7,8,9,10};

    cout<<sum(a)<<endl;
}
