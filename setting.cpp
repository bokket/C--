#include <iostream>
using namespace std;


class Person
{

public:
    //设置写姓名
    void setName(string names)
    {
        name=names;
    }
    //获取读姓名
    string getName()
    {
        return name;
    }
    //设置年龄
    void setAge(int ages)
    {
        if(ages<0 || ages>0)
        age=ages;
    }
    //获取年龄
    int getAge()
    {
        //age=0;//初始化为0岁
        return age;
    }
    //设置情人
    void setLover(string lovers)
    {
        lover=lovers;
    }
private:
    //姓名 可读可写
    string name;
    //可读
    int age;
    //可写
    string lover;
};

int main()
{
    Person p;
    p.setName("wxz");
    cout<<"姓名"<<p.getName()<<endl;
    //p.age=19;
    p.setAge(1000);    
    cout<<"年龄"<<p.getAge()<<endl;
    
    p.setLover("adl");
    //cout<<"情人"<<p.getLover()<<endl;


}