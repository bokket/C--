//
// Created by bokket on 2020/10/13.
//
#include "stack.cpp"
#include <iostream>
using namespace std;
int main()
{
    //stack st;//无参数构造

    stack* ps=new stack;//无参数构造器，标配
    stack* ps2=new stack(100);
   /* {
        stack st1;
    }*/

    stack st(10);//有参数

    /*stack st();
    void func();*/
    //st.init();

    for(char v='a';!st.isFull() && v!='z';v++)
    {
        st.push(v);
    }
    while(!st.isEmpty())
        cout<<st.pop()<<endl;
}
