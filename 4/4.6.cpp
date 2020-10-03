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
int main() {
    short svalue = 32767;
    ++svalue; // -32768
    cout<<svalue<<endl;
    unsigned uivalue = 0;
    --uivalue;  // 4294967295
    cout<<uivalue<<endl;
    unsigned short usvalue = 65535;
    ++usvalue;  // 0
    cout<<usvalue<<endl;
}