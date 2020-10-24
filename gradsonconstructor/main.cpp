//
// Created by bokket on 2020/10/25.
//
#include <iostream>
using namespace std;

class Stu
{
public:
    Stu(string sn="",char cs='x',float fs=0.0)
            :_name(sn),_sex(cs),_score(fs){}
    void dis()
    {
        cout<<"name"<<_name<<endl;
        cout<<"sex"<<_sex<<endl;
        cout<<"_socre"<<_score<<endl;
    }
private:
    string _name;
    char _sex;
    float _score;
};

class Graduate: public Stu
{
public:
    Graduate(string sn,char cs,float fs,float fsa)
            :Stu(sn,cs,fs)
    {
        _salary=fsa;
    }

    void dump()
    {
        dis();
        cout<<"salary:"<<_salary<<endl;
    }

private:
    float _salary;
};


class Doctor: public Graduate
{
public:
    Doctor(string sn,char cs,float fs,float fsa,string st)
        :Graduate(sn,cs,fs,fsa)
    {
        _title=st;
    }
    void disDump()
    {
        dump();
        cout<<"title"<<_title<<endl;
    }
private:
    string _title;
};


int main()
{
    Doctor d("zhao si",'s',99,3000,"doctor zhao");
    d.disDump();
}
