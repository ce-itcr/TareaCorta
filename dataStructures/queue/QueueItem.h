/**
 * @file queueItem.h
 * @version 1.0
 * @date 21/04/19-
 * @authors angelortizv
 * @title
 * @brief
 */

#ifndef TAREACORTA_QUEUEITEM_H
#define TAREACORTA_QUEUEITEM_H

#include <iostream>
#include <cstring>

using namespace std;


class QueueItem {

private:
    char _data[30];
    const int _itemId;
    QueueItem* _pNext;

public:
    QueueItem( char *pData, int id);
    void setNext(QueueItem *pItem);
    QueueItem* getNext() const;
    int getId() const;
    const char* getData() const;
};


#endif //TAREACORTA_QUEUEITEM_H
