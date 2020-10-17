//
// Created by bokket on 2020/10/17.
//

#include <iostream>
using namespace std;
class A
{
public:
    A()
    {

    }
    static const int a=10;
};
int main()
{
    A a;
    cout<<a.a<<endl;
    cout<<A::a<<endl;
}