//
// Created by bokket on 2020/10/3.
//
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <iterator>
using std::vector;
using std::cout;
using std::string;
using std::cin;
using std::endl;
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};

    int* p1,*p2;
    int* t1,*t2;
    p1=begin(a);
    p2=end(a);

    t1=begin(b);
    t2=end(b);
    while((p1!=p2) && (t1!=t2) )
    {
        if(*p1==*t1)
        {
            cout<<"array is the same"<<*p1<<" "<<*t1<<endl;
        }
        else
            cout<<"different"<<endl;
        p1++;
        t1++;
    }

    vector<int>c={1,2,3};
    vector<int>d={1,2,3};
    if(c==d)
        cout<<"vector is the same"<<endl;
}
