//
// Created by bokket on 2020/10/23.
//
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

class Pow
{
public:

    double operator()(double x,int y)
    {
        int ret=1;
        for(int i=0;i<y;i++)
            ret*=x;
        return ret;
    }
};

bool myCompare(int a,int b)
{
    return a<b;
}

class Compare
{
public:
    Compare(bool b=true)
            :flag(b){}
    bool operator()(int a,int b)
    {
        if(flag==true)
            return a>b;
        else
            return a<b;
    }

private:
    bool flag;
};
int main()
{
    int a=5;
    cout<<pow(a,3)<<endl;
    Pow mypow;
    cout<<mypow(a,3)<<endl;
   // cout<<mypow.operator()(a,3)<<endl;
    cout<<mypow(a,3)<<endl;
    //a+b;//a.operator+(b);->a+(b)->a+b


    /*int arr[6]={1,3,5,8,6,4};
    vector<int> vi(arr,arr+6);

    Compare c;
    sort(vi.begin(),vi.end(),Compare(false));*/
    //sort(vi.begin(),vi.end(),c);
    //sort(vi.begin(),vi.end(),myCompare);

    /*vector<int>::iterator  itr;
    for(itr=vi.begin();itr!=vi.end();itr++)
    {
        cout<<*itr<<endl;
    }*/
    /*for(auto itr=vi.begin();itr!=vi.end();itr++)
    {
        cout<<*itr<<endl;
    }/*
    for(auto i:vi)
    {
        cout<<i<<endl;
    }*/
}

