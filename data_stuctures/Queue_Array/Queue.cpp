//
// Created by hxy123 on 2022/11/3.
//

#include "Queue.h"
Queue::Queue():myBack(-1),myFront(-1){}
bool Queue::empty() const{
    return myFront==myBack;
}
void Queue::enqueue(int n){
    int newBack=(myBack+1)%CAPACITY;
    if (newBack!=myFront){
        array[myBack]=n;
        myBack=newBack;
    }
    else cout<<"队列已满"<<endl;
}
int Queue::front(){
    return myFront;
}
void Queue::dequeue(){
    if (!empty()){
        myFront=(myFront+1)%CAPACITY;
    }
    else cout<<"队列为空，不能删除"<<endl;
}
void Queue::display(){
    for(int i=myFront;i!=myBack;i=(i+1)%CAPACITY){
        cout<<array[i]<<" ";
    }
}