//
// Created by hxy123 on 2022/11/3.
//

#include "Stack.h"
Stack::Stack() :array(NULL),capacity(50),size(0)
{
    array=new int[capacity];
}
Stack::~Stack(){
    delete []array;
    capacity=0;
    size=0;
}
Stack::Stack(const Stack & obj){
    array=new int[obj.capacity];
    capacity=obj.capacity;
    size=obj.size;
    for (int i=0;i<size;i++){
        *(array+i)=*(obj.array+i);
    }
}
Stack & Stack::operator=(const Stack &right){
    array=new int[right.capacity];
    capacity=right.capacity;
    size=right.size;
    for(int i=0;i<size;i++){
        *(array+i)=*(right.array+i);
    }
}
bool Stack::empty()
{
    if (size==0) return 0;
    else return 1;
}

void Stack::push(const int obj){
    if (size<capacity){
        *(array+size)=obj;
        size++;
    }
    else cout<<"栈容量已达上限"<<endl;

}
int Stack::top(){
    if (size==0)cout<<"栈中无元素"<<endl;
    else return *(array+size-1);
}
void Stack::pop(){
    *(array+size)=0;
    size--;
}
void Stack::display(){
    for (int i=0;i<size;i++){
        cout<<*(array+i)<<" ";
    }
    cout<<endl;
}