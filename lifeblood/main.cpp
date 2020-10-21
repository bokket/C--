//
// Created by bokket on 2020/10/20.
//

#include <iostream>
using namespace std;

class Sprite
{
    friend void fight(Sprite& sp);
public:
    Sprite(int lb=100)
        :_lifeBlood(lb){}

    int getLifeblood()
    {
        return _lifeBlood;
    }
    void setLifeblood(int lb)
    {
        _lifeBlood=lb;
    }

private:
    int _lifeBlood=100;
};
void fight(Sprite& sp)
{
    sp.setLifeblood(sp.getLifeblood()-20);
    cout<<sp.getLifeblood()<<endl;

    sp._lifeBlood=sp._lifeBlood-20;
    cout<<sp._lifeBlood<<endl;
}
int main()
{
    Sprite sp;
    fight(sp);
}