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
    Complex operator++()
    {
        //Complex r(*this);
        cout<<"++a"<<endl;
        this->real++;
        this->image++;
        //return *this;
        return *this;
    }
    const Complex operator++(int)
    {
        Complex r(*this);
        cout<<"++a"<<endl;
        this->real++;
        this->image++;
        return r;
    }

private:
    double real;
    double image;
};


int main()
{

    int a=10;
   /* cout<<++a<<endl;
    cout<<a<<endl;
    cout<<++++a<<endl;
    cout<<a<<endl;*/
   cout<<a++<<endl;
   cout<<a<<endl;

    //cout<<a++++<<endl;
    cout<<a<<endl;


    Complex c(10,0);
    (c++++).Format();
    c.Format();
   /* (++c).Format();
    c.Format();*/
   //++c;
    //(++++c).Format();
    //((c.operator++()).operator++());
    //c.Format();
}
