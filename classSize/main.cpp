//
// Created by bokket on 2020/10/15.
//
#include <iostream>
using namespace std;

class Time
{
public:
    Time(int h,int m,int s)
        :hour(h),min(m),sec(s)
    {

    }
    void display()
    {
        cout<<"this"<<this<<endl;
        cout<<this->hour<<this->min<<this->sec<<endl;
    }
    void display(Time *t)
    {
        cout<<"this"<<this<<endl;
        cout<<t->hour<<t->min<<t->sec<<endl;
    }
private:
    int hour;
    int min;
    int sec;
};

int main()
{
    Time t(1,2,3),t1(1,2,3),t2(3,4,5);
    cout<<sizeof(Time)<<"--"<<sizeof(t)<<endl;

    cout<<"&t"<<&t<<endl;//在对象调用函数的同时，向该函数传递了该对象的指针，该指针就是this
    t.display(&t);
    cout<<"&t1"<<&t1<<endl;
    t1.display(&t1);
    cout<<"&t2"<<&t2<<endl;
    t2.display(&t2);


}