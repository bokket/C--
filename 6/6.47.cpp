//
// Created by bokket on 2020/10/9.
//
#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;
#define NDEBUG
void print(vector<int>::const_iterator a,vector<int>::const_iterator b)
{
#ifdef NDEBUG
    cout<<"vector size:"<<b-a<<endl;
#endif
    if(a==b)
    {
        cout<<"over"<<endl;
        return;
    }
    cout<<*a<<" ";
    //a++;
    ++a;
    print(a,b);
}
int main()
{
    vector<int>a={1,2,3,4,5,6,7,8};
    print(a.begin(),a.end());
}
