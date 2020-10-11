//
// Created by bokket on 2020/10/9.
//
#include <iostream>
#include <vector>
using namespace std;
int main(int argc,char** argv)
{
    string s;
    int i=1;
    for(i=1;i!=argc;i++)
    {
        //s+=string(argv[i])+" ";
        s+=argv[i]+string(" ");
    }
    cout<<s<<endl;
}
