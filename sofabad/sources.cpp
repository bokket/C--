//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;


class Furniture
{
public:
    void descript()
    {
        cout<<"_weight"<<_weight<<endl;
        cout<<"colour"<<_colour<<endl;
    }
protected:
    float _weight;
    int _colour;
};

class sofa:virtual public Furniture
{
public:
    sofa(float w=0,int c=1)
    {
        _weight=w;
        _colour=c;
    }

    void site()
    {
        cout<<"take a site have a rest"<<endl;
    }

};


class Bed:virtual public Furniture
{
public:
    Bed(float w=0,int c=1)
    {
        _weight=w;
        _colour=c;
    }
    void sleep()
    {
        cout<<"have a sleep ......."<<endl;
    }
};

class sofaBed:public sofa, public Bed,virtual public Furniture
{
public:
    sofaBed(float w,int c)
    {
        _weight=w;
        _colour=c;
    }
};

int main()
{
    sofaBed sb(10000,2);
    sb.site();
    sb.sleep();
    sb.descript();
}