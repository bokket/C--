//
// Created by bokket on 2020/10/9.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int count_size(int n)
{
    static int sum=0;
    sum+=n;
    return sum;
}
int main()
{
    int i;
    for(i=0;i!=10;i++)
        cout<<count_size(i)<<endl;
}
