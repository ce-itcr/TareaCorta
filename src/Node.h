/**
 * @file Node.h
 * @version 1.0
 * @date 21/04/19-
 * @authors isolis2000
 * @title
 * @brief
 */

#ifndef NODE_H
#define NODE_H


#include <iostream>

class Node {

public:
    const char *getProcess() const;
    void setProcess(const char *process);
    double getTime() const;
    void setTime(double time);
    int getName() const;
    void setName(int name);
    int getNum() const;
    void setNum(int num);
    Node *getNext() const;
    void setNext(Node *next);
    Node(double time, const char* process, int name, int num);
    Node();

private:
    Node* next;
    const char* process;
    int name;
    int num;
    double time;

};


#endif // NODE_H
