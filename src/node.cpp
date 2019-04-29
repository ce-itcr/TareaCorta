#include "node.h"

Node::Node(double time, const char* process, int name, int num){
    this->time = time;
    this->name = name;
    this->num = num;
    this->process = process;
    this->next = nullptr;
}

const char *Node::getProcess() const {
    return process;
}

void Node::setProcess(const char *process) {
    Node::process = process;
}

double Node::getTime() const {
    return time;
}

void Node::setTime(double time) {
    Node::time = time;
}

int Node::getName() const {
    return name;
}

void Node::setName(int name) {
    Node::name = name;
}

int Node::getNum() const {
    return num;
}

void Node::setNum(int num) {
    Node::num = num;
}

Node::Node() {}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}
