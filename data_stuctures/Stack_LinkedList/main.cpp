//
// Created by hxy123 on 2022/11/3.
//
#include "Stack.h"
int main()
{
    Stack a;
    a.push(100);
    a.push(22);
    a.push(123);
    a.display();
    a.pop();
    a.display();
    cout<<a.top()<<endl;
    Stack b(a);
    b.display();
}