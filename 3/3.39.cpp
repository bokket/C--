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
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(s1>s2)
        cout<<"s1 is big"<<endl;
    else if(s1<s2)
        cout<<"s1 is small"<<endl;
    else
        cout<<"s1 is the same s2"<<endl;

    char a[]="xiyou";
    char b[]="linux";
    if(strcmp(a,b)>0)
        cout<<"a is big"<<endl;
    else if(strcmp(a,b)<0)
        cout<<"a is small"<<endl;
    else
        cout<<"a is the same b"<<endl;
}