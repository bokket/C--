//
// Created by bokket on 2020/10/25.
//

#include <iostream>
using namespace std;


class Birth
{
public:
    Birth(int y=0,int m=0,int d=0)
        :_year(y),_month(m),_day(d){}
        void disBir()
        {
            cout<<"year"<<_year<<endl;
            cout<<"month"<<_month<<endl;
            cout<<"day"<<_day<<endl;
        }
private:

    int _year;
    int _month;
    int _day;
};

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
    Graduate(string sn,char cs,float fs,float fsa,int y,int m,int n)
        :Stu(sn,cs,fs),birth(y,m,n)
    {
        _salary=fsa;
    }

    void dump()
    {
        dis();
        birth.disBir();
        cout<<"salary:"<<_salary<<endl;
    }

private:
    float _salary;
    Birth birth;
};
int main()
{
    Graduate g("zhangsan",'s',99,1000,1989,10,3);
    g.dump();
}