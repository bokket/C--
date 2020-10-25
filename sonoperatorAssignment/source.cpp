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
    Graduate(string sn,char cs,float fs,float fsa,int y,int m,int d)
            :Stu(sn,cs,fs),bir(y,m,d)
    {
        _salary=fsa;
    }

    Graduate (const Graduate& another)
        :Stu(another),bir(another.bir)
    {
        this->_salary=_salary;
    }
    void dump()
    {
        dis();
        bir.disBir();
        cout<<"salary:"<<_salary<<endl;
    }
    Graduate & operator=(const Graduate & another)
    {
        if(this==&another)
            return *this;

        Stu::operator=(another);
        bir=another.bir;

        this->_salary=_salary;
        return *this;
    }
private:
    float _salary;
    Birth bir;
};
int main()
{
    Graduate g("zhangsan",'s',99,1000,1999,9,9);
    g.dump();
    cout<<"-------------"<<endl;
    Graduate gg("xxxx",'x',9,9999,1888,8,8);
    g=gg;
    g.dump();

}