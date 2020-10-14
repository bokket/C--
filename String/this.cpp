//
// Created by bokket on 2020/10/14.
//
#include <iostream>
using namespace std;

class Stu
{
public:
    Stu(string na,int a)
    //:name(na),age(a)
    {
        this->name=na;
        this->age=a;
        cout<<"this"<<this<<endl;
    }
    void display()
    {
        cout<<name<<"--"<<age<<endl;
    }
    Stu& growUp()
    {
        this->age++;
        return *this;
    }
private:
    string name;
    int age;
};
int main()
{
    Stu s("wxz",17);
    cout<<"&s"<<&s<<endl;
    s.display();
    //s.growUp()->growUp()->growUp()->growUp()->growUp()->display();
    s.growUp().growUp().growUp().growUp().growUp().display();
}
