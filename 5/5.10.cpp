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
            case 'A':
                acnt++;
                break;
            case 'e':
            case 'E':
                ecnt++;
                break;
            case 'i':
            case 'I':
                icnt++;
                break;
            case 'o':
            case 'O':
                ocnt++;
                break;
            case 'u':
            case 'U':
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
