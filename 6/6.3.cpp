//
// Created by bokket on 2020/10/8.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int fact(int i)
{
    int s=1;

    while(i>1)
    {
        //cout<<i<<endl;
        s*=i--;
        //cout<<i<<endl;
    }
    return s;
}
int main()
{
    int i;
    cin>>i;
    int s=fact(i);
    cout<<s<<endl;
}
