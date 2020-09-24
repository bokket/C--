#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::string;
using std::cin;
using std::endl;
int main()
{
    string s;
  //  cin>>s;
    vector<string> t;
    while(cin>>s)
    {
        t.push_back(s);
    }
    
    for(auto &i:t)
    {
        for(auto &j:i)
        {
            j=toupper(j);
        }
    }

    for(auto str:t)
    {
        cout<<str<<endl;
    }
    //cout<<endl;
}

