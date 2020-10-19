//
// Created by bokket on 2020/10/20.
//

#include <iostream>
using namespace std;

class Game{
public:
    Game()
    {
        pf[0]=&Game::f;
        pf[1]=&Game::g;
        pf[2]=&Game::n;
        pf[3]=&Game::h;
    }
    void select(int i)
    {
        if(i>=0 && i<=3)
        {
           // (xxx[i])();
            (this->*pf[i])(i);
        }
    }
private:
    void f(int idx){cout<<"void f(int idx)"<<idx<<endl;}
    void g(int idx){cout<<"void g(int idx)"<<idx<<endl;}
    void n(int idx){cout<<"void n(int idx)"<<idx<<endl;}
    void h(int idx){cout<<"void h(int idx)"<<idx<<endl;}
    enum
    {
        nc=4;
    };
    void (Game::*pf[nc])(int idx);
};
int main()
{
    Game g;
    g.select(1);
    g.select(2);
    g.select(3);
    //g.select(4);
}