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
    int acnt=0,ecnt=0,icnt=0,ocnt=0,ucnt=0;
    char ch;
    while(cin>>ch)
    {
        switch (ch)
        {
            case 'a':
                acnt++;
                break;
            case 'e':
                ecnt++;
                break;
            case 'i':
                icnt++;
                break;
            case 'o':
                ocnt++;
                break;
            case 'u':
                ucnt++;
                break;
            default:
                break;
        }
    }
    cout<<"number is a: \t"<<acnt<<'\n'
        <<"number is e: \t"<<ecnt<<'\n'
        <<"number is i: \t"<<icnt<<'\n'
        <<"number is o: \t"<<ocnt<<'\n'
        <<"number is u: \t"<<ucnt<<endl;
}
