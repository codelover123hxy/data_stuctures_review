//
// Created by hxy123 on 2022/11/3.
//
#ifndef DATA_STUCTURES_REVIEW_STACK_H
#define DATA_STUCTURES_REVIEW_STACK_H
#include "Node.h"

class Stack {
public:
    Stack();
    Stack(const Stack &obj);
    ~Stack();
    Stack &operator=(const Stack &right);
    bool empty();
    void push(const int obj);
    int top();
    void pop();
    void display();
private:
    int size;
    Node *myTop; //指向栈顶的指针
};
#endif //DATA_STUCTURES_REVIEW_STACK_H