//
// Created by bokket on 2020/10/13.
//
#include <iostream>
#include "String.cpp"
#include <string>
using namespace std;

int main()
{
    string s;
    string s2("china");
    cout<<s.c_str();
    cout<<s2.c_str()<<endl;

    string s3(s2);//用一个对象生成另外一个对象  拷贝构造器
    cout<<s3<<endl;

    cout<<"--------------------"<<endl;
    String ms;
    String ms2("japan");
    cout<<ms.c_str();
    cout<<ms2.c_str()<<endl;

    String ms3(ms2);
    cout<<ms3.c_str()<<endl;


    String ms4=ms3;
    cout<<ms4.c_str()<<endl;

    String ms5;
    //ms5=ms3;
    ms5.operator=(ms3);

    String ms6;
    //ms6=ms5=ms4;
    ms6.operator=(ms5.operator=(ms4));

    cout<<ms5.c_str()<<endl; //赋值运算
    cout<<ms6.c_str()<<endl;


    String a="aa",b="bb",c="cc";
    (a=b)=c;
    cout<<a.c_str()<<endl;
    cout<<b.c_str()<<endl;
    cout<<c.c_str()<<endl;


    string x="abc",y="efg";
    string z=x+y;
    cout<<z.c_str()<<endl;

    String xx="abc",yy="efg";
    String zz=xx.operator+(yy);
    cout<<zz.c_str()<<endl;



    string x1="abc",y1="efg";
    if(x1==y1)
        cout<<"x1==y1"<<endl;
    if(x1>y1)
        cout<<"x1>y1"<<endl;
    if(x1<y1)
        cout<<"x1<y1"<<endl;


    String xx1="abc",yy1="efg";
    if(xx1==yy1)
        cout<<"xx1==yy1"<<endl;
    if(xx1>yy1)
        cout<<"xx1>yy1"<<endl;
    if(xx1<yy1)
        cout<<"xx1<yy1"<<endl;

    string f="abc";
    cout<<f[2]<<endl;

    String h="sfg";
    h[2]='@';
    cout<<h[2]<<endl;

    cout<<h.at(2)<<endl;
    h.at(2)='$';

}
/*
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


    cout<<"----------------------------"<<endl;
  */

    /*char* p="";
    cout<<"===="<<p<<"-----"<<endl;*/
//}
