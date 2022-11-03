//
// Created by hxy123 on 2022/11/3.
//

#ifndef DATA_STUCTURES_REVIEW_QUEUE_H
#define DATA_STUCTURES_REVIEW_QUEUE_H

#include <iostream>
using namespace std;
const int CAPACITY=10;
class Queue {
public:
    Queue();
    bool empty() const;
    void enqueue(int n);
    int front();
    void dequeue();
    void display();
private:
    int array[CAPACITY];
    int myFront;
    int myBack;
};


#endif //DATA_STUCTURES_REVIEW_QUEUE_H
