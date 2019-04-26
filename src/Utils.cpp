#include "Utils.h"

Utils::Utils(){

}

void Utils::swap(Node *process1, Node *process2) {
    Node tmp = *process1;
    *process1 = *process2;
    *process2 = tmp;
}
