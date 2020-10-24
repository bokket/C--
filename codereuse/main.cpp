//
// Created by bokket on 2020/10/24.
//

#include <iostream>
using namespace std;


class Human
{
public:
    void eat(string food)
    {
        cout<<food<<endl;
    }
};

class Teacher: public Human
{
public:
    void teach(string course)
    {
        cout<<"i am a teacher teaching"<<course<<endl;
    }
    /*void eat(string food)
    {
        cout<<food<<endl;
    }*/
};

class Worker: public Human
{

};

class Stu: public Human
{
public:
    void study(string course)
    {
        cout<<"i am study studying"<<course<<endl;
    }
   /* void eat(string food)
    {
        cout<<food<<endl;
    }*/
};
int main()
{
    Teacher t;
    t.teach("c++");
    t.eat("mian");
    Stu s;
    s.study("C++");
    s.eat("lao tan main");

}