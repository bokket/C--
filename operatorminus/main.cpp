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

    const Complex operator-() const
    {
        return Complex(-this->real,-this->image);
    }

private:
    double real;
    double image;
};


int main()
{

    int n=5;
    //-n=10;
    cout<<-n<<endl;
    cout<<-(-n)<<endl;
    cout<<n<<endl;

    Complex c(5,0);
    (c.operator-()).operator-();
    //Complex cc=-c;
    //-cc=Complex(10,0);
    //cc.Format();
    c.Format();
}
