//
// Created by bokket on 2020/10/24.
//
#include <iostream>
using namespace std;



//void operator delete(void *);
//void *operator new[](size_t);
//void operator delete[](void *);



class A
{
public:
    A()
    {
        //_x=100;
        //_y=200;
        cout<<"A()"<<endl;
    }
    void xxxx()
    {
        cout<<_x<<_y<<endl;
    }
    ~A()
    {
        cout<<"~A()"<<endl;
    }
    void *operator new(size_t size)
    {
        cout<<size<<endl;
        cout<<"operator new"<<endl;
        void *p=malloc(size);
        ((A*)p)->_x=100;
        ((A*)p)->_y=200;
        cout<<p<<endl;
        return p;
    }

    void operator delete(void *p)
    {
        cout<<"operator delete"<<endl;
        free(p);
        cout<<p<<endl;
    }
    void *operator new[](size_t size)
    {
        cout<<size<<endl;
        cout<<"operator new"<<endl;

        void *p=malloc(size);
        cout<<p<<endl;
        return p;
    }
    void operator delete[](void *p)
    {
        cout<<p<<endl;
        cout<<"operator delete"<<endl;
        free(p);
    }
private:
    int _x;
    int _y;
};

int main()
{
   /* A* pa=new A;

    int *pi=new int;
    pa->xxxx();
    delete pa;
*/
   A* pa=new A[10];
   delete[] pa;
}