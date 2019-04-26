#include "QueueItem.h"

QueueItem::QueueItem( char *pData, int id) : _itemId(id) {
    strncpy( _data, pData, strlen( pData ) +1 );
    _pNext = NULL;
}

void QueueItem::setNext( QueueItem *pItem ){
    _pNext = pItem;
}

QueueItem* QueueItem::getNext() const{
    return _pNext;
}

int QueueItem::getId() const{
    return _itemId;
}

const char* QueueItem::getData() const{
    return _data;
}
