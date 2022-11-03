//
// Created by hxy123 on 2022/11/3.
//

#ifndef DATA_STUCTURES_REVIEW_STACK_H
#define DATA_STUCTURES_REVIEW_STACK_H

#include <iostream>
using namespace std;
class Stack {
public:
    Stack();
    ~Stack();
    Stack(const Stack &obj);
    Stack &operator=(const Stack &right);
    bool empty();
    void push(const int obj);
    int top();
    void pop();
    void display();
private:
    int *array;
    int capacity;
    int size;
};


#endif //DATA_STUCTURES_REVIEW_STACK_H
