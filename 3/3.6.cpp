#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main()
{
    
    string s;
    cin>>s;
    
    for(char &c:s)
    //for(auto &c:s)
    {
        c='X';
    }
    cout<<s<<endl;
}

