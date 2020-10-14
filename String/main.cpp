//
// Created by bokket on 2020/10/14.
//
#include <string.h>
#include <iostream>
using namespace std;

class Stu
{
public:
    Stu(string na)
        :name(na),len(strlen(na.c_str()))
    {

    }
    void dis()
    {
        cout<<len<<endl;
    }

private:
    int len;
    string name;
};

int main()
{
    Stu s("china");

    s.dis();
}
