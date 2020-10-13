//
// Created by bokket on 2020/10/13.
//

#ifndef C_STACK_H
#define C_STACK_H
#include <iostream>
using namespace std;

class stack {
public:
    /*stack()
    {
        top=0;
        space=new char[1024];
        //cout<<"stack() "<<endl;
        //init();
    }*/
    stack(int size)
    {
        top=0;
        space=new char[size];
        _size=size;
    }

    //void init();
    bool isEmpty();
    bool isFull();
    char pop();
    void push(char c);

    ~stack()
    {
        delete space;
       // cout<<"finish"<<endl;
    }
private:
    //char space[1024];
    char* space;
    int top;
    int _size;
};


#endif //C_STACK_H
