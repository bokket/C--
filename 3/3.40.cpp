
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
    char a[]="xiyou";
    char b[]="linux";
    char c[100];
    strcpy(c,a);
    cout<<c<<endl;
    strcat(c," ");
    cout<<c<<endl;
    strcat(c,b);
    cout<<c<<endl;
}
