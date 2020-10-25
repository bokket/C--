//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;

class Stu
{
    friend ostream & operator<<(ostream & out,Stu & stu);

public:

    Stu(int i,int j)
        :a(i),b(j){}
private:
    int a;
    int b;
};

ostream & operator<<(ostream & out,Stu & stu)
{
    out<<stu.a<<endl;
    out<<stu.b<<endl;
}

class Graduate: public Stu
{
    friend ostream & operator<<(ostream & out,Graduate & gra)
    {
        out<<(Stu&)gra<<endl;
        out<<gra.c<<endl;
    }

public:

    Graduate(int i,int j,int k)
        :Stu(i,j),c(k){}
private:
    int c;
};


int main()
{

    Graduate g(1,2,3);
    cout<<g<<endl;
}