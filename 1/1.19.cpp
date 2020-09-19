#include <iostream>

int main()
{
    
    int v;
    int v1;
    std::cin>>v>>v1;
    if(v<=v1)
    {
        while(v<=v1)
        {
            std::cout<<v;
            ++v;
        }
        std::cout<<std::endl;
    }
    else
    {
        std::cout<<"please input smaller!"<<"\n";
    }
}
    
