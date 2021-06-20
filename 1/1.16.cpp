#include <iostream>

int main()
{
    int v;
    int sum=0;
    while(std::cin>> v)
    {
        sum+=v;
        //std::cout<< sum << std::endl;
    }
    std::cout<< sum << std::endl;
    return 0;
}

