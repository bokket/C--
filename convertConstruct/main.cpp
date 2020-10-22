//
// Created by bokket on 2020/10/22.
//

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class Point2D
{
    friend class Point3D;
public:
    Point2D(int x=0,int y=0)
            :_x(x),_y(y){}
private:
    int _x;
    int _y;
};

class Point3D
{
public:
    Point3D(int x=0,int y=0,int z=0)
        :_x(x),_y(y),_z(z){}

        explicit Point3D(const Point2D & d2)//Point2D->Point3D
        {
            this->_x=d2._x;
            this->_y=d2._y;
            this->_z=rand()%100;
        }
        void Format()
        {
            cout<<"("<<_x<<","<<_y<<","<<_z<<")"<<endl;
        }
private:
    int _x;
    int _y;
    int _z;
};



Point3D convert(Point2D& d2)
{
    return Point3D(d2);
}

int main()
{
    Point3D p3;
    p3.Format();
    Point3D *p=new Point3D;
    p->Format();
}
/*
int main()
{
    srand(time(NULL));
    Point2D d2(10,100);
    //Point3D d3=d2;
    //d3.Format();
    //Point3D d3=(Point3D)d2;
    Point3D d3=static_cast<Point3D>(d2);
    //d3=convert(d2);
    d3.Format();

}*/