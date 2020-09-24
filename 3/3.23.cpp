#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::string;
using std::cin;
using std::endl;
using namespace std;
int main()
{
    vector<int> a(10,1);

    for(auto i=a.begin();i!=a.end();i++)
    {
        *i=(*i)*2;
        
    }
    for(auto b:a)
        cout<<b<<endl;

}
