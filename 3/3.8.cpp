#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::cin;
using std::endl;
int main()
{
    string s;
    cin>>s;
    decltype(s.size()) i=0;
   /* while(i!=s.size())
    {
        s[i]='X';
        i++;
    }
    cout<<s<<endl;
    */
    for(i=0;i<s.size();i++)
    {
        s[i]='X';
    }
    cout<<s<<endl;
}

