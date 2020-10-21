//
// Created by bokket on 2020/10/20.
//

#include <iostream>
#include <math.h>
using namespace std;

class Point;

class ManagePoint
{
public:
    float getDis(const Point& p1,const Point &p2);
};


class Point
{
    friend float ManagePoint::getDis(const Point& p1,const Point &p2);
public:
    Point(int x=0,int y=0)
        :_x(x),_y(y)
    {}
    void Format()
    {
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }
private:
    float _x;
    float _y;
};

/*
float getDis(const Point& p1,const Point &p2)
{
    float dx=p1._x-p2._x;
    float dy=p1._y-p2._y;
    return sqrt(dx*dx+dy*dy);
}*/

float ManagePoint::getDis(const Point& p1,const Point &p2)
{
    float dx=p1._x-p2._x;
    float dy=p1._y-p2._y;
    return sqrt(dx*dx+dy*dy);
}

int main()
{
    Point p1(3,4);
    p1.Format();
    Point p2(7,8);
    p2.Format();

    ManagePoint mp;
    cout<<"dis"<<mp.getDis(p1,p2)<<endl;
}