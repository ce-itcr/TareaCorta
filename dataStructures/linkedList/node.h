/**
 * @file node.h
 * @version 1.0
 * @date 21/04/19-
 * @authors angelortizv
 * @title
 * @brief
 */

#ifndef TAREACORTA_NODE_H
#define TAREACORTA_NODE_H

#include <iostream>

using namespace std;

template <class T>

class Node
{
public:
    Node();
    Node(T);
    ~Node();

    Node *next;
    T data;
    void delete_all();
    void print();
};


#endif //TAREACORTA_NODE_H
