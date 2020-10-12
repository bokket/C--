//
// Created by bokket on 2020/10/12.
//
#include <iostream>
#include <vector>
using namespace std;
#define PI 3.14
class Circle
{

//访问权限
    //公共权限
public:


    //属性
    int r;

    //行为
    //获取圆的周长
    double calculate()
    {
        return 2*PI*r;
    }

};



int main()
{
    //通过圆类来创建具体的圆 (对象)
    Circle c1;
    //给圆对象 的属性进行赋值

    c1.r=10;
    cout<<"圆的周长为:"<<c1.calculate()<<endl;
}
