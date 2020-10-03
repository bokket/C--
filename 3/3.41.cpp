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
    int a[]={1,2,3,4,5};
    vector<int>b (begin(a),end(a));
    for(auto i:b)
        cout<<i<<" ";
    cout<<endl;
}