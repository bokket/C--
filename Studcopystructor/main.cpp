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


            Birth(const Birth& another)
            {
                this->_year=another._year;
                this->_month=another._month;
                this->_day=another._day;
            }
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

            Stu(const Stu& another)
            {
                this->_name=another._name;
                this->_sex=another._sex;
                this->_score=another._score;
            }

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
    Graduate(const Graduate& another)
        :Stu(another),bir(another.bir)
    {
        this->_salary=another._salary;
    }
    void dump()
    {
        dis();
        bir.disBir();
        cout<<"salary:"<<_salary<<endl;
    }

private:
    float _salary;
    Birth bir;
};
int main()
{
    Graduate g("zhao si",'s',99,10000,1989,9,9);
    g.dump();
    cout<<"++++++++++++++++++++"<<endl;
    Graduate gg(g);
    gg.dump();
}