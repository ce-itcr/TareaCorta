#include "Queue.h"

Queue::Queue(){
    Node* _pNext = _pHead = _pTail = 0;
    _itemCounter = 0;
}

Queue::~Queue(){

}

//void Queue::addItem(char *pData){
//    QueueItem *pItem = new QueueItem(pData, ++_itemCounter);
//
//    if ( 0 == _pHead )
//        _pHead = _pTail = pItem;
//    else{
//        _pTail->setNext(pItem);
//        _pTail = pItem;
//    }
//    QueueItem* _pNext = 0;
//}

void Queue::addItem(Node* node) {
    if (_pHead == 0)
        _pHead = _pTail = node;
    else {
        _pTail->setNext(node);
        _pTail = node;
    }
    Node* _pNext = 0;
}


void Queue::removeItem(){
    if ( _pTail == 0 && _pHead == 0 ){
        // empty body
    }
    else{
        Node* _pItem = _pHead->getNext();
        delete _pHead;
        _pHead = _pItem;
    }

}

void Queue::print(){
    Node* _pItem = _pHead;
    while ( _pItem != NULL ){
        cout << _pItem->getName() << endl;
        cout << _pItem->getProcess() << endl;
        _pItem = _pItem->getNext();
    }
}

void Queue::erase(){
    while ( _pHead != NULL ){
        Node* _pItem = _pHead->getNext();
        delete _pHead;
        _pHead = _pItem;
    }
}

int Queue::getCont() const {
    return cont;
}
