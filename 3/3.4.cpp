#include <iostream>
using std::endl;
using std::string;
using std::cout;
using std::cin;
int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        if(s1>s2)
            cout<<s1<<endl;
        else
            cout<<s2<<endl;
    }
}
/*int main()
{
    string s1,s2;
    s1="xiyoulinux";
    s2="cprimerplus";
    if(s1>s2)
        cout<<s1<<endl;
    else
        cout<<s2<<endl;
}*/

