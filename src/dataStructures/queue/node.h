#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

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
