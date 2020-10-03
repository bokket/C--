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
    const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
    }
}