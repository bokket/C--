//
// Created by bokket on 2020/10/7.
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
    int i,j;
    cin>>i>>j;
    if(j==0)
    {
        throw runtime_error("second is 0");
    }
    cout<<i/j<<endl;
}
