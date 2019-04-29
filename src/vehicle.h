/**
 * @file vehicle.h
 * @version 1.0
 * @date 21/04/19-28/04/19
 * @authors angelortizv
 */

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "dataStructures/queueAux/queue.h"
#include "node.h"
#include "processes.h"
#include "util.h"

using namespace std;

class Vehicle {

private:
    int processCount;
    int a, b, c, d, e, f;
    Node A, B, C, D, E, F;
    int cNum;
    Queue queue;
    Node generateNode(string letter);
    int getNumbOfVeh();
    void processQueue();


    int vehicleId;
    char processesOrder[6];
    char message = 0;
    int processesTime [6];
    int actualState = 0;
    int timeElapsed = 0;

public:
    Vehicle(int vehicleId);
    void moveAlong();
    void start();
    char getActualProcess();
    int getActualStateAux();
    int getActualState() const;
    void setActualState(int value);

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
