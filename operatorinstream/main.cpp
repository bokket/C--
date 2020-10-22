//
// Created by bokket on 2020/10/21.
//

#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(double r=0,double i=0) :real(r),image(i){}

    friend istream &operator>>(istream &ci,Complex &c)
    {
        ci>>c.real;
        ci>>c.image;
        return ci;
    }
    friend ostream &operator<<(ostream &co,Complex &c)
    {
        co<<"("<<c.real<<","<<c.image<<")"<<endl;
        return co;
    }
private:
    double real;
    double image;
};
int main()
{
    Complex c,c1;
    cin>>c>>c1; //cin.operator>>(c)
    //operator(cin,c)
    cout<<c<<c1;//cout.operator<<(c)
    //operator(cout,c)
}