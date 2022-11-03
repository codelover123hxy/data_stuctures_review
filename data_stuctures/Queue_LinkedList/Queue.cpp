//
// Created by hxy123 on 2022/11/3.
//
#include "Queue.h"
Queue::Queue():myFront(NULL),myBack(NULL){}
Queue::~Queue()
{
    for(Node*p=myFront;p;p=p->next){
        Node*q=p;
        delete q;
    }
}
Queue::Queue(const Queue&obj) {
    if (obj.myFront == obj.myBack)
        myFront = obj.myFront;
    else {
        myFront = obj.myFront;
        myBack = myFront;
        Node *q;
        for (Node *p = myFront->next; p; p = p->next) {
            q = new Node(p->dataValue, NULL);
            myBack->next = q;
            myBack = myBack->next;
        }
    }
}
bool Queue::empty(){
    if (myFront!=NULL||myBack!=NULL) return 0;
    else return 1;
}
void Queue::enqueue(int n){
    Node* newNode=new Node(n,NULL);
    if (empty()) {
        myBack=myFront=newNode;
    }
    else{
        myBack->next=newNode;
        myBack=myBack->next;
    }
}
void Queue::dequeue(){
    if (!empty()){
        Node*p=myFront;
        myFront=myFront->next;
        delete p;
    }
    else cout<<"队列已空"<<endl;
}
void Queue::display(){
//    cout<<myFront->dataValue;
    for (Node*p=myFront;p;p=p->next)
        cout<<p->dataValue<<" ";
    cout<<endl;
}
int Queue::front(){
    if (empty()) cout<<"队列为空!"<<endl;
    else return myFront->dataValue;
}