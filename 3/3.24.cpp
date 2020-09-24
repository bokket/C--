#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int b;
    while(cin>>b)
    {
        a.push_back(b);
    }

    auto i=a.begin();
    auto j=a.end()-1;

    
    for(i=a.begin();i<j;i++)
        cout<<(*i)+((*i)+1)<<endl;

  /*  while(i<j)
    {
        cout<<(*i)+(*j)<<endl;
        i++;
        j--;
    
    }*/
}

