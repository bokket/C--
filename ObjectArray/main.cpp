//
// Created by bokket on 2020/10/15.
//

#include <iostream>
using namespace std;

class Stu
{
public:
    Stu(string n = ""):_name(n){}
    //init();
    void dis()
    {
        cout<<_name<<endl;
    }

private:
    string _name;
};

int main()
{
    Stu array[100]={Stu("abc"),Stu("haha")};
    //Stu *ps=new Stu("bob");

    //Stu* ps=new Stu[2]={Stu("bob"),Stu("jin")};

}
