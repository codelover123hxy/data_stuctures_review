//
// Created by hxy123 on 2022/11/3.
//

#include "Stack.h"
int main()
{
    Stack a;
    a.push(1);
    a.push(3);
    a.push(10);
    a.pop();
    a.push(23);
    a.display();
    Stack b(a);
    b.display();
    b.push(4);
    Stack c;
    c=b;
    c.display();
    cout<<a.top();
}
