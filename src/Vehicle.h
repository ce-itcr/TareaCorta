/**
 * @file Vehicle.h
 * @version 1.0
 * @date 21/04/19-
 * @authors isolis2000
 * @title
 * @brief
 */

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "../dataStructures/queue/Queue.h"
#include "Node.h"
//#include "Utils.h"

using namespace std;

class Vehicle {

private:
//    int processCount;
    int a, b, c, d, e, f;
    Node A, B, C, D, E, F;
    int cNum;
    Queue queue;
    Node generateNode(string letter);
    int getNumbOfVeh();
    void processQueue();


public:
    int getCNum() const;
    Vehicle(int a, int b, int c, int d, int e, int f, int cNum);
    int* getA();
    int* getB();
    int* getC();
    int* getD();
    int* getE();
    int* getF();
};

#endif // VEHICLE_H
