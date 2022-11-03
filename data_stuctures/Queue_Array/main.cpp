//
// Created by hxy123 on 2022/11/3.
//
#include "Queue.h"
int main()
{
    Queue q;
    for (int i=1;i<=8;i++)
        q.enqueue(i);
    q.dequeue();
    q.dequeue();
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(10);
//    q.enqueue(100);
    q.display();
}
