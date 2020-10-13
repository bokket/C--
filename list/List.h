//
// Created by bokket on 2020/10/13.
//

#ifndef C_LIST_H
#define C_LIST_H


struct Node{
    int data;
    struct Node* next;
};

class List {
public:
    List* createList();
    void insertList(int d);
    void print();

private:
    Node* head;
};


#endif //C_LIST_H
