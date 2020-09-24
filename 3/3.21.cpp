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
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};

    cout<<v1.size()<<endl;
    cout<<v2.size()<<endl;
    cout<<v3.size()<<endl;
    cout<<v4.size()<<endl;
    cout<<v5.size()<<endl;
    cout<<v6.size()<<endl;
    cout<<v7.size()<<endl;

    
    for(auto i=v1.cbegin();i!=v1.cend();i++)
        cout<<*i<<" ";
    cout<<endl;

     for(auto i=v2.cbegin();i!=v2.cend();i++)
         cout<<*i<<" ";
     cout<<endl;

    for(auto i=v3.cbegin();i!=v3.cend();i++)
         cout<<*i<<" ";              
    cout<<endl;

     for(auto i=v4.cbegin();i!=v4.cend();i++)
           cout<<*i<<" ";              
      cout<<endl;

     for(auto i=v5.cbegin();i!=v5.cend();i++)
          cout<<*i<<" ";
      cout<<endl;

    for(auto i=v6.cbegin();i!=v6.cend();i++)
          cout<<*i<<" ";              
     cout<<endl;


    for(auto i=v7.cbegin();i!=v7.cend();i++)
          cout<<*i<<" ";
     cout<<endl;



}

