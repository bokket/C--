//
// Created by bokket on 2020/10/31.
//


#include <iostream>
#include <vector>
using namespace std;

bool find(vector<int>::const_iterator begin,vector<int>::const_iterator end,int i)
{
    while(begin!=end)
    {
        if(*begin==i)
            return true;
        begin++;
    }
    return false;
}