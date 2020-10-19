//
// Created by bokket on 2020/10/19.
//
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(string n,int nu)
            :name(n),num(nu)
            {

            }

//private:
    string name;
    int num;
};
int main()
{
    Student s("zhangsi",100);
    Student *ps=&s;
    //string *psn=&s.name;//此行为破坏了封装
    Student ss("zhaoqi",100);
    Student *pss=&ss;
    //下面的指针是指的类层面的指针，而不是对象层面的

    string Student:: *psn=&Student::name;

    cout<<s.*psn<<endl;
    cout<<ps->*psn<<endl;

    cout<<ss.*psn<<endl;
    cout<<pss->*psn<<endl;
}