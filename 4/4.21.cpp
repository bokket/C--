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
    vector<int> a={1,2,3,4,5,6};
    for(auto &i:a)
    {
        if(i%2==1)
            cout<<i*2<<" ";
        cout<<endl;
    }
}
