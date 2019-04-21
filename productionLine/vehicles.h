/**
 * @file vehicles.h
 * @version 1.0
 * @date 21/04/19-
 * @authors angelortizv
 * @title Selector de Vehículos.
 * @brief
 */

#ifndef TAREACORTA_VEHICLES_H
#define TAREACORTA_VEHICLES_H

#include <iostream>

using namespace std;

class vehicles {

private:
    void vehicle1();
    void vehicle2();
    void vehicle3();
    void vehicle4();
    void vehicle5();
    void vehicle6();

public:
    vehicles();

    static vehicles& getInstance(){
        static vehicles instance;
        return instance;
    }

    void vehicleSelector(int car);

};


#endif //TAREACORTA_VEHICLES_H
