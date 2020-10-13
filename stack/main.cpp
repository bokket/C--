//
// Created by bokket on 2020/10/13.
//
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Stack
{
    char space[1024];
    int top;
};

void init(Stack &s)
{
    s.top=0;
    memset(s.space,0,sizeof(s.space));
};

bool isEmpty(Stack &s)
{
    return s.top==0;
};

bool isFull(Stack &s)
{
    return s.top==1024;
};

char pop(Stack &s)
{
    return s.space[--s.top];
};

void push(Stack &s,char c)
{
    s.space[s.top++]=c;

};

int main()
{
    Stack st;

    init(st);

    if(!isFull())
        push(st,'a');
    if(!isFull())
        push(st,'b');
    if(!isFull())
        push(st,'c');
    if(!isFull())
        push(st,'d');
    if(!isFull())
        push(st,'e');

    while(!isEmpty(st))
        cout<<pop(st)<<endl;

}

