//
// Created by hxy123 on 2022/11/3.
//

#ifndef DATA_STUCTURES_REVIEW_NODE_H
#define DATA_STUCTURES_REVIEW_NODE_H

#endif //DATA_STUCTURES_REVIEW_NODE_H
#include <iostream>
using namespace std;
class Node{
public:
    Node(int value=0,Node*p=NULL):dataValue(value),next(p){};
    int dataValue;
    Node* next;
};