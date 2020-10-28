//
// Created by bokket on 2020/10/28.
//

#include <iostream>
using namespace std;

class A
{
public:
    virtual ~A()
    {}
};
class B: public A
{

};

class C: public A
{
public:

    void func();
};
class D
{

};
int main()
{
    B b;
    A* pa=&b;
    B* pb;
  //  B* pb = dynamic_cast<B*>(pa);
//    cout<<pb<<endl;

   /* C* pc=dynamic_cast<C*>(pa);
    if(pc!= NULL)
        cout<<pc<<endl;

    D* pd=dynamic_cast<D*>(pa);
    if(pd!= NULL)
        cout<<pd<<endl;
*/
 /*   pb=static_cast<B*>(pa);
    cout<<pb<<endl;


    C* pc=static_cast<C*>(pa);
    cout<<pc<<endl;

    D* pd=static_cast<D*>(pa);
    cout<<pd<<endl;*/

    pb=reinterpret_cast<B*>(pa);
    cout<<pb<<endl;


    C* pc=reinterpret_cast<C*>(pa);
    cout<<pc<<endl;

    D* pd=reinterpret_cast<D*>(pa);
    cout<<pd<<endl;
}
