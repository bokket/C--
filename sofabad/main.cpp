//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;

class sofa
{
public:
    void site()
    {
        cout<<"take a site have a rest"<<endl;
    }
};


class Bed
{
public:
    void sleep()
    {
        cout<<"have a sleep ......."<<endl;
    }
};

class sofaBed: public sofa, public Bed
{

};

int main()
{
    sofaBed sb;
    sb.site();
    sb.sleep();
}

