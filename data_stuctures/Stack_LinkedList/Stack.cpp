//
// Created by hxy123 on 2022/11/3.
//

#include "Stack.h"
Stack::Stack():size(0),myTop(NULL){}
Stack::Stack(const Stack &obj){
    size=obj.size;
    if (size==1) {
        myTop=obj.myTop;
    }
    else{
        myTop=obj.myTop;
        Node*q=myTop;
        for (Node*p=obj.myTop->next;p;p=p->next){
            Node *newNode=new Node(p->dataValue,NULL);
            q->next=newNode;
            q=q->next;
        }
    }
}
Stack::~Stack(){
    for (Node*p=myTop;p;p=p->next){
        Node*q=p;
        delete q;
    }
}
Stack& Stack::operator=(const Stack &right){
    size=right.size;
    if (size==1) {
        myTop=right.myTop;
    }
    else{
        myTop=right.myTop;
        Node*q=myTop;
        for (Node*p=right.myTop->next;p;p=p->next){
            Node *newNode=new Node(p->dataValue,NULL);
            q->next=newNode;
            q=q->next;
        }
    }
}
bool Stack::empty(){
    if (size!=0) return 1;
    else return 0;

}
void Stack::push(const int obj){
    Node* newNode=new Node(obj,NULL);
    newNode->next=myTop;
    myTop=newNode;
    size++;
}
int Stack::top(){
    return myTop->dataValue;
}
void Stack::pop(){
    Node*p=myTop;
    myTop=myTop->next;
    delete p;
    size--;
}
void Stack::display(){
    for (Node*p=myTop;p;p=p->next)
        cout<<p->dataValue<<" ";
    cout<<endl;
}