#include <iostream>
using namespace std;

class C1
{
    int m;
};

struct C2
{
    int m;
};

int main()
{
    C1 c1;
    //c1.m=100;
    
    C2 c2;
    c2.m=100;
}