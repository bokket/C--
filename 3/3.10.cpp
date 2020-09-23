#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::cin;
using std::endl;
int main()
{
    string s;
    string r;
    cin>>s;
    //decltype(s.size()) i=0;
    int flag=0;
    //for(i=0;i<s.size();i++)
    for(auto c:s)
    {
        if(!ispunct(c))
        {
            r+=c;
            //cout<<c<<endl;    
        }
    }
    cout<<r<<endl;
}

