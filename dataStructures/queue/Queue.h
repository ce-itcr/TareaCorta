/**
 * @file queue.h
 * @version 1.0
 * @date 21/04/19-
 * @authors angelortizv
 * @title
 * @brief
 */

#ifndef TAREACORTA_QUEUE_H
#define TAREACORTA_QUEUE_H

#include <iostream>
#include "src/Node.h"

using namespace std;

class QueueItem;

class Queue {

private:
    Node *_pHead;
    Node *_pTail;
    int _itemCounter;
    int cont;

public:
    Queue();
    ~Queue();

    int getCont() const;

    void addItem(Node* node);
    void removeItem();
    void print();
    void erase();

};

#endif //TAREACORTA_QUEUE_H
