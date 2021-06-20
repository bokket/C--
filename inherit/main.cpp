//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;

class Base
{
public:
    int pub;
protected:
    int pro;
private:
    int pri;
};

class Derive: public Base
{
public:
    int a;
    void foo()
    {
        cout<<pub<<endl;
        cout<<pro<<endl;
    }
protected:
    int b;
private:
    int c;

};

class M: protected Derive
{
    void foo()
    {
        cout<<pub<<endl;

    }
};
int main()
{
    Derive d;
    d.pub;
    d.pro;

}