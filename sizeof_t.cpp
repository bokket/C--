//
// Created by bokket on 2020/11/24.
//

#include <iostream>
using namespace std;

#define sizeof_v(x) (char*)(&x+1) - (char*)(&x)
#define sizeof_t(t) (size_t)((t*)0+1)

#define ALIGN(v,b) ((v+b-1) & ~(b-1))
class Empty
{

};

int main()
{
    Empty e;
    int n;
    cout<<sizeof_v(e)<<endl;
    cout<<sizeof_v(n)<<endl;
    cout<<sizeof_t(Empty)<<endl;
    cout<<sizeof_t(int)<<endl;

    cout<<ALIGN(3,16)<<endl;
    cout<<ALIGN(31,16)<<endl;
    cout<<ALIGN(0,16)<<endl;
    cout<<ALIGN(4198,4096)<<endl;
}