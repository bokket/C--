//
// Created by bokket on 2020/10/13.
//
#include <iostream>
#include "String.cpp"
#include <string>
using namespace std;

int main()
{
    string s;  //char* _str=NULL;
    string s2("abcdefg"); //char* str="abcdefg";
    cout<<s.c_str();
    cout<<s2.c_str()<<endl;

    string *ps=new string("haha");

    cout<<(*ps).c_str()<<endl;
    delete ps;


    String ms;
    String ms2("china");
    cout<<ms.c_str()<<endl;
    cout<<ms2.c_str()<<endl;

    String *pms=new String("heihei");
    cout<<(*pms).c_str()<<endl;
    delete pms;

    /*char* p="";
    cout<<"===="<<p<<"-----"<<endl;*/
}
