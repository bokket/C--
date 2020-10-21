//
// Created by bokket on 2020/10/20.
//
#include <iostream>
using namespace std;

class Complex
{
    friend Complex operator+(Complex &c1,Complex &c2);
public:
    Complex(double r=0,double i=0) :real(r),image(i){}
    void Format()
    {
        cout<<"("<<real<<","<<image<<")"<<endl;
    }
private:
    double real;
    double image;
};
Complex operator+(Complex &c1,Complex &c2)
{
    Complex c;
    c.real=c1.real+c2.real;
    c.image=c1.image+c2.image;
    return c;
}

int main()
{
    Complex c1=(1,2);
    Complex c2=(3,4);

    //Complex sum={0,0};
    Complex sum;
    sum=c1+c2;
    sum.Format();
}
