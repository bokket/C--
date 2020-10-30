//
// Created by bokket on 2020/10/30.
//
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


void func(char & ch)
{

}

int main()
{
    /*int a;
    double b;
    char buf[1024];*/

    //char buf[1024];

    //cin>>a>>b>>buf;
   // cin>>buf;

    /*cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"buf = "<<buf<<endl;*/


  /*  fstream fs("abc.txt",ios::in|ios::out|ios::trunc);

    fs<<1<<" "<<2<<" "<<3<<endl;//123\n

    fs.seekg(0,ios::beg);

    int a,b,c;
    fs>>a>>b>>c;

    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
    cout<<"c ="<<c<<endl;*/

  /*char ch;
  char a,b,c,d;
  while((cin.get(ch)))
  {
      cout.put(ch);
  }*/
    /*char a,b,c,d;
  cin.get(a).get(b).get(c).get(d);
    cout<<a<<b<<c<<d<<endl;*/

    //char buf=new char[1024];
    char buf[1024];
    //cin>>buf;
    //cout<<buf<<endl;
    cin.get(buf,1024,'i');
    cout<<"XXXX"<<buf<<endl;
    cin.ignore(1);
    memset(buf,0,1024);
    cin.get(buf,1024,'i');
    cout<<"OOO"<<buf<<endl;
}
