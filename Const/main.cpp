//
// Created by bokket on 2020/10/15.
//

#include <iostream>

using namespace std;


class A
{
public:
    A (int v)
        :val(v)
    {

    }
    void dis() const
    {
        cout<<"void dis() const"<<endl;
        //cout<<val<<endl;
        print();
    }

  //  void dis()
   // {
     //   cout<<"void dis()"<<endl;
        //cout<<val<<endl;
       // print();
   // }
    void print() const
    {
    //    x=100;
    //  y=200;
    }
private:
    const int val;
    int x,y;
};

int main()
{
    //const A a(5);
    A a(5);
    a.dis();
}