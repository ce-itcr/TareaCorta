/**
 * @file QueueItem.h
 * @version 1.0
 * @date 21/04/19-
 * @authors angelortizv
 */

#ifndef TAREACORTA_QUEUEITEM_H
#define TAREACORTA_QUEUEITEM_H

#include <iostream>

using namespace std;

class queueItem{
private:
    char _data[30];
    const int _itemId;
    queueItem* _pNext;
public:
    queueItem( char *pData, int id);
    void setNext(queueItem *pItem);
    queueItem* getNext() const;
    int getId() const;
    const char* getData() const;
};


#endif //TAREACORTA_QUEUEITEM_H
