//
// Created by bokket on 2020/10/7.
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
    string t;
    string read;
    while(cin>>read)
    {
        if(read==t)
            break;
        else
            t=read;
    }
    if(cin.eof())
        cout<<"no repeat"<<endl;
    else
        cout<<read<<endl;
}
