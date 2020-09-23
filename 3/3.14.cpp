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
    int s;
    //cin>>s;
    vector<int> a(10);
    while(cin>>s)
        a.push_back(s);

    for(const int& k :a)
        cout << k << endl;
    

}

