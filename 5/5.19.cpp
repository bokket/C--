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
int main() {
    string s1,s2;
    string s3;
    do{
        cin>>s1>>s2;
        cout<<(s1<=s2 ? s1:s2)<<endl;
        cout<<"input y/n"<<endl;
        cin>>s3;
    }while(!s3.empty()&& (s3[0]=='y'));
}
