//
// Created by bokket on 2020/10/21.
//

#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(double r=0,double i=0) :real(r),image(i){}
    void Format()
    {
        cout<<"("<<real<<","<<image<<")"<<endl;
    }

    /*void operator+=(Complex &another)
    {
        this->real+=another.real;
        this->image+=another.image;
        return *this;
    }*/
/*
    Complex operator+=(const Complex &another)
    {
        this->real+=another.real;
        this->image+=another.image;
        return *this;
    }*/
    Complex& operator+=(const Complex &another)
    {
        this->real+=another.real;
        this->image+=another.image;
        return *this;
    }
private:
    double real;
    double image;
};

int main2()
{
    int a = 10, b = 20, c = 30;
    a += b+=c;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;
}

int main()
{
    int a = 10, b = 20, c = 30;
    a += b+=c;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;

    Complex ca(10,0),cb(20,0),cc(30,0);
    (ca+=cb)+=cc;
    //ca.operator +=(cb.operator +=(cc));
    //ca+=cb+=cc;
    ca.Format();
    cb.Format();
    cc.Format();
}

/*int main()
{
    int a=10,b=20,c=30;
    a+=b;
    b+=c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;


    Complex ca(10,0),cb(20,0),cc(30,0);
    ca+=cb;
    cb+=cc;

    ca.Format();
    cb.Format();
    cc.Format();
}*/