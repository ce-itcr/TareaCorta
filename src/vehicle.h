/**
 * @file Vehicle.h
 * @version 1.0
 * @date 21/04/19-28/04/19
 * @authors angelortizv
 */

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <queue>
#include "processes.h"

using namespace std;

class Vehicle {

private:
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

};

#endif // VEHICLE_H
