#include <iostream>
//using namespace::name;
using std::cin;
using std::endl;
using std::cout;
using std::string;
int main()
{
    string s;
    int len;
    while(getline(cin,s))
    {
        if(!s.empty())
            cout<<s<<endl;

        auto len=s.size();
         cout<<s.size()<<endl;

    }
}
/*int main()
{
    string s;
    while(getline(cin,s))
    {
        cout<<s<<endl;
    }
}*/
/*int main()
{
    string s;
    while(cin>>s)
    {
        cout<<s<<endl;
    }
}*/
/*
int main()
{
    string s;
    cin>>s;
    cout << s<< endl;
}*/

