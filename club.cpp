#include <iostream>
using namespace std;
class Cube
{
public:
    //设置获取它的长宽高
    void setL(int ls)
    {
        l=ls;
    }
    int getL()
    {
        return l;
    }
    void setW(int ws)
    {
        w=ws;
    }
    int getW()
    {
        return w;
    }
    void setH(int hs)
    {
        h=hs;
    }
    int getH()
    {
        return h;
    }
    int calulateS()
    {
        return 2*l*w+2*l*h+2*w*h;
    }
    int calulateV()
    {
        return l*w*h;
    }

    bool isSame(Cube &c)
    {
        if(w==c.w && h==c.h && l==c.l)
            return true;
        else
        {
            return false;
        }
        
    }
private:
    int l;
    int w;
    int h;
};


int main()
{
    Cube cube1;
    cube1.setL(1);
    cube1.setW(2);
    cube1.setH(1);

    cout<<cube1.calulateS()<<" "<<cube1.calulateV()<<endl;

    Cube cube2;
    cube2.setL(1);
    cube2.setW(2);
    cube2.setH(1);
    int ret=cube1.isSame(cube2);
    if(ret)
        cout<<"相等"<<endl;
}


