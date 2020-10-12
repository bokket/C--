#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:



//类中属性和行为，统一称为成员
//属性 成员属性  成员变量
//行为 成员函数  成员方法

    string name;
    int id;
    void show()
    {
        cout<<"学生"<<" "<<name<<" "<<id<<endl;
    }

    //给姓名赋值
    void setName(string m_name)
    {
        name=m_name;
    }
};


int main()
{
    Student stu;
    //stu.name="wxz";
    stu.setName("wxz");
    stu.id=1;
    stu.show();
    //cin>>stu.name>>stu.id;
    //cout<<"学生"<<stu.name<<" "<<stu.id<<endl;



}