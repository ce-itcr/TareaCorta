/**
 * @file queue.h
 * @version 1.0
 * @date 21/04/19-28/04/19
 * @authors angelortiz
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
    int nro;
    struct node *next;
};

typedef struct node *pointer;

class Queue {

private:
    pointer head;
    pointer tail;
public:
    Queue(void);
    void enqueue(int );
    int dequeue(void );
    bool emptyQueue(void);
    void showQueue(void);
    void clearQueue(void);

};

#endif // QUEUE_H
