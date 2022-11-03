//
// Created by hxy123 on 2022/11/3.
//
#include "Queue.h"
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
//    q.dequeue();
    q.display();
    Queue q1(q);
    q1.display();
}
