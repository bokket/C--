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
    for(int (&row)[4]:ia) {
        for (int i:row)
            cout << i << " ";
        cout <<endl;
    }
    cout<<endl;

    for(std::size_t i=0;i!=3;i++)
    {
        for(std::size_t j=0;j!=4;j++)
            cout<<ia[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

    for(int(*p)[4]=ia;p!=ia+3;p++)
    {
        for(int *q=*p;q!=*p+4;q++)
            cout<<*q<<" ";
        cout<<endl;
    }
}