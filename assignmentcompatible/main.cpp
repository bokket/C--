//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;

class Shape
{
public:
    Shape(int x=0,int y=0)
        :_x(x),_y(y)
        {
            cout<<"Shape=>"<<this<<endl;
            cout<<typeid(this).name()<<endl;
        }


        virtual void draw()
        {
            cout<<"draw shape from"<<"("<<_x<<","<<_y<<")"<<endl;
        }
protected:
    int _x;
    int _y;
};

class Circle: public Shape
{
public:
    Circle(int x=0,int y=0,int r=0)
        :Shape(x,y),_radius(r)
        {
            cout<<"Shape=>"<<this<<endl;
            cout<<typeid(this).name()<<endl;
        }


    void draw()
    {
        cout<<"draw shape from"<<"("<<_x<<","<<_y<<")"<<"radius"<<_radius<<endl;
    }
protected:
    int _radius;
};


class Rect: public Shape
{

};
int main()
{
    Shape s(1,2);
    s.draw();

    Circle c(4,5,6);
    /*c.draw();

    s=c;
    s.draw();
*/
    //Shape & rs=c;
    //rs.draw();

    Shape *ps=&c;
    ps->draw();

  /*  double a;
    char *p=&a;
    char a;
    double *pd=&a;*/
}