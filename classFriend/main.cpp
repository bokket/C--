//
// Created by bokket on 2020/10/21.
//

#include <iostream>
#include <math.h>
using namespace std;

class Point;

class ManagePoint
{
public:
    float getDis(const Point& p1,const Point &p2);
    float getArea(const Point& p1,const Point& p2,const Point& p3);
};


class Point
{
    friend class ManagePoint;
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

float ManagePoint::getArea(const Point& p1,const Point& p2,const Point& p3)
{
    float dx=getDis(p1,p2);
    float dy=getDis(p2,p3);
    float dz=getDis(p1,p3);

    float p=(dx+dy+dz)/2;

    return sqrt(p*(p-dx)*(p-dy)*(p-dz));
}

int main()
{
    Point p1(3,4);
    p1.Format();
    Point p2(7,8);
    p2.Format();

    Point p3(-100,900);

    ManagePoint mp;
    cout<<"dis"<<mp.getDis(p1,p2)<<endl;

    cout<<"area:"<<mp.getArea(p1,p2,p3)<<endl;
}