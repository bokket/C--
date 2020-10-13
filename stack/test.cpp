//
// Created by bokket on 2020/10/13.
//
#include "stack.h"
#include <iostream>
using namespace std;
int main()
{
    stack st;
    st.init();

    for(char v='a';!st.isFull() && v!='z';v++)
    {
        st.push(v);
    }
    while(!st.isEmpty())
        cout<<st.pop()<<endl;
}
