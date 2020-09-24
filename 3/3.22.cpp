#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::vector;
using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::isalpha;
int main()
{
    vector<string> text;

    //string s;

    for(string s;getline(cin,s);text.push_back(s))


    for(auto &str:text)
    {
        for(auto &c:str)
        {
            c=toupper(c);
        }
        cout<<str<<" ";
    }
    cout<<endl;
    //for(auto str1:text)
        //cout<<str1<<endl;


    //string it="sdfrtg";
    /*for(auto it=a.cbegin();it!=a.cend() && !it->empty() ;it++)
    {
        cout<<*it<<endl;

        for(auto b=a.begin();b!=a.end() && !isspace(*b);b++)
        {
            *b=toupper(*b);
        }
        cout<<*b<<endl;
    }*/
}


