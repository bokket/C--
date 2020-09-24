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
    vector<int> a(11,0);
    int i;
    auto k=a.begin();

    while(cin>>i)
    {
        if(i<=100)
        {
            ++*(a.begin()+i/10);            
        }

    }
    for(auto s:a)
        cout<<s<<" ";
    cout<<endl;
}
