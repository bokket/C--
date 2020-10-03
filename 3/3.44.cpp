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
    int ia[3][4]={
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    for(auto &row:ia) {
        for (int i:row)
            cout << i << " ";
        cout <<endl;
    }
    cout<<endl;

    for(auto i=0;i!=3;i++)
    {
        for(auto j=0;j!=4;j++)
            cout<<ia[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

    for(auto p=ia;p!=ia+3;p++)
    {
        for(auto q=*p;q!=*p+4;q++)
            cout<<*q<<" ";
        cout<<endl;
    }

    cout<<endl;
    using arr=int[4];
    for(arr &row:ia) {
        for (int i:row)
            cout << i << " ";
        cout <<endl;
    }
    cout<<endl;

    for(auto i=0;i!=3;i++)
    {
        for(auto j=0;j!=4;j++)
            cout<<ia[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

    for(arr* p=ia;p!=ia+3;p++)
    {
        for(int* q=*p;q!=*p+4;q++)
            cout<<*q<<" ";
        cout<<endl;
    }
}