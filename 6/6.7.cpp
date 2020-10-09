//
// Created by bokket on 2020/10/9.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int count_size(int i)
{
    static int count=0;
    return count++;
}
int main()
{
    int i;
    for(i=0;i!=10;i++)
        cout<<count_size(i)<<endl;
}
