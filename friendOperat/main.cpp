//
// Created by bokket on 2020/10/21.
//
#include <iostream>
using namespace std;

class Complex
{
    //friend Complex operator+(Complex &c1,Complex &c2);
    //friend Complex operator+(Complex &another);
public:
    Complex(double r=0,double i=0) :real(r),image(i){}
    void Format()
    {
        cout<<"("<<real<<","<<image<<")"<<endl;
    }

    Complex& operator=(const Complex & another)
    {
        this->real=another.real;
        this->image=another.image;
        return *this;
    }

    const Complex operator+(const Complex &another)
    {
        Complex sum;
        sum.real=this->real+another.real;
        sum.image=this->image+another.image;
        return sum;
    }

private:
    double real;
    double image;
};
/*Complex operator+(Complex &c1,Complex &c2)
{
    Complex c;
    c.real=c1.real+c2.real;
    c.image=c1.image+c2.image;
    return c;
}*/

int main()
{
    /*Complex c1=(1,2);
    Complex c2=(3,4);

    //Complex sum={0,0};
    Complex sum;
    sum=c1+c2;
    sum.Format();
    */

    Complex a(1,2),b(4,5);
    //a=b;//a.operator=(b)
    Complex s=a.operator+(b);//operator+(a,b)  a.operator+(b)
    Complex s1=a+b;
    s1.Format();
    a.Format();
    b.Format();
    s.Format();
}