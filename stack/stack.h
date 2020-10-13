//
// Created by bokket on 2020/10/13.
//

#ifndef C_STACK_H
#define C_STACK_H


class stack {
public:
    void init();
    bool isEmpty();
    bool isFull();
    char pop();
    void push(char c);
private:
    char space[1024];
    int top;
};


#endif //C_STACK_H
