//
// Created by bokket on 2020/10/13.
//

#include "stack.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;
void stack::init()
{
    top=0;
    memset(space,0,sizeof(space));
}
bool stack::isEmpty()
{
    return top==0;
}
bool stack::isFull()
{
    return top==1024;
}
char stack::pop()
{
    return space[--top];
}
void stack::push(char c)
{
    space[top++]=c;
}