#include "queue.h"

Queue::Queue(void){
    head = nullptr;
    tail = nullptr;
}

/**
 * @brief Queue::emptyQueue
 * @return boolean
 */
bool Queue::emptyQueue(){
    if(head == nullptr)
        return true;
    else return false;
}

/**
 * @brief Queue::enqueue
 * @param x
 */
void Queue::enqueue(int x){
    pointer p_aux;
    p_aux = new(struct node);
    p_aux->nro = x;
    p_aux->next = nullptr;

    if(head == nullptr)
       head=p_aux;
    else tail->next=p_aux;

    tail = p_aux;
}

/**
 * @brief Queue::dequeue
 * @return n
 */
int Queue::dequeue(void){
    int n;
    pointer p_aux;
    p_aux = head;
    n = p_aux->nro;
    head = (head)->next;
    delete(p_aux);
    return n;
}

/**
 * @brief Queue::showQueue
 */
void Queue::showQueue(void){
    pointer p_aux;
    p_aux = head;
    while(p_aux != nullptr){
        cout << "\n\n\t" << p_aux->nro;
        p_aux = p_aux->next;
    }
}

/**
 * @brief Queue::clearQueue
 */
void Queue::clearQueue(void){
    pointer p_aux, r_aux;
    p_aux = head;
    while(p_aux != nullptr){
        r_aux = p_aux;
        p_aux = p_aux->next;
        delete(r_aux);
    }
    head = nullptr;
    tail = nullptr;
}
