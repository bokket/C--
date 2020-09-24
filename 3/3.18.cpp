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
    int i;
    vector<int> a;
    while(cin>>i)
    {
        a.push_back(i);
    }
    
 /* for(int j=0;j<a.size()-1;j++)
    {
        cout<<a[j]+a[j+1]<<endl;
    }*/

    int n=0;
    int m=a.size()-1;

    while(n<m)
    {
        cout<<a[n]+a[m]<<endl;
        n++;
        m--;
    }
}

