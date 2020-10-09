//
// Created by bokket on 2020/10/9.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void swap(int &i,int& j)
{
    int t;
    t=i;
    i=j;
    j=t;
}
int main()
{
    int i,j;
    cin>>i>>j;
    swap(i,j);
    cout<<i<<" "<<j<<endl;
}
