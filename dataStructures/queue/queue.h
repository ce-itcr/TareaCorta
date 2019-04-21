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

using namespace std;

class queueItem;

class queue{
private:
    queueItem *_pHead;
    queueItem *_pTail;
    int _itemCounter;
public:
    queue();
    ~queue();
    void addItem(char *pData);
    void removeItem();
    void print();
    void erase();

};


#endif //TAREACORTA_QUEUE_H
