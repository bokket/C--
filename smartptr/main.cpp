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
class SmartPtr
{
public:
    SmartPtr(A* pa)
    {
        _pa=pa;
    }

    /*A& getAref()
    {
        return *_pa;
    }*/

    A& operator*()
    {
        return *_pa;
    }
    A* operator->()
    {
        return _pa;
    }


    A* getP()
    {
        return _pa;
    }

    ~SmartPtr()
    {
        delete _pa;
    }
private:
    A *_pa;
};
void foo()
{
    SmartPtr sp(new A);
    //sp.getAref().xxxx();//operator*
    (*sp).xxxx();
    sp->xxxx();
    //sp.getP()->xxxx();//operator->
}
int main()
{
    foo();
}