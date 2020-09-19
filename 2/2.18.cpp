#include <iostream>

int main()
{
    int a=18,b=2;
    int *p;
    int *p1;
    p=&a;//p保存的是i的地址
    p1=&b;//p1保存的是b的地址

    std::cout<< *p1 << " ";
      p1=p;
      std::cout << *p1<< std::endl;

    p1=&b;
    std::cout<<p1<<" ";
    p1=&a;
    std::cout<<p1<<std::endl;

    return 0;
}

