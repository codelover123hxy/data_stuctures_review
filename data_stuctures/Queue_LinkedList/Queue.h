//
// Created by hxy123 on 2022/11/3.
//

#ifndef DATA_STUCTURES_REVIEW_QUEUE_H
#define DATA_STUCTURES_REVIEW_QUEUE_H

#include "Node.h"
class Queue {
public:
    Queue();
    ~Queue();
    Queue(const Queue&obj);
    bool empty();
    void enqueue(int n);
    void dequeue();
    void display();
    int front();
private:
    Node *myFront,*myBack;
};


#endif //DATA_STUCTURES_REVIEW_QUEUE_H
