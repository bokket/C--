//
// Created by bokket on 2020/10/23.
//

#include <iostream>
#include <memory>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    void xxxx()
    {
        cout<<"xxxx"<<endl;
    }
    ~A()
    {
        cout<<"~A()"<<endl;
    }
};
void foo()
{
    //A a;
   // A *p=new A;
  //  delete p;
    auto_ptr<A> p(new A);
    p->xxxx();
    A a;
    a.xxxx();
}
int main()
{
    foo();
}