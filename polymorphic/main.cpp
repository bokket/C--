//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;

class Shape
{
public:
    Shape(int x=0,int y=0)
            :_x(x),_y(y){}
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
            :Shape(x,y),_radius(r){}
    void draw()
    {
        cout<<"draw shape from"<<"("<<_x<<","<<_y<<")"<<"radius"<<_radius<<endl;
    }
protected:
    int _radius;
};


class Rect: public Shape
{
public:
    Rect(int x=0,int y=0,int w=0,int l=0)
        :Shape(x,y),_width(w),_length(l){}

        virtual void draw()
        {
            cout<<"draw shape from"<<"("<<_x<<","<<_y<<")"<<"_width"<<_width<<"length"<<_length<<endl;
        }
protected:
    int _width;
    int _length;
};
int main()
{
    Circle c(3,4,5);
    /*Shape* ps=&c;

    ps->draw();*/

    Rect r(7,8,9,10);
    //ps=&r;
    //ps->draw();

    Shape *ps;
    while(1)
    {
        int choice;
        cin>>choice;
        switch (choice) {
            case 1:
                ps = &c;
                break;
            case 2:
                ps = &r;
                break;
        }
        ps->draw();
    }
}