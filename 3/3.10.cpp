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
    //decltype(s.size()) i=0;
    int flag=0;
    //for(i=0;i<s.size();i++)
    for(auto c:s)
    {
        if(ispunct(c))
        {
            flag=1;
            //cout<<c<<endl;    
        }
        if(flag==1)
            cout<<c<<endl;
    }
}

