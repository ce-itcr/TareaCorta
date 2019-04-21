/**
 * @file processes.h
 * @version 1.0
 * @date 21/04/19-
 * @authors angelortizv
 * @title Procesos de Ejecución.
 * @brief Contiene los procesos a ejecutar para crear un vehículo.
 */

#ifndef TAREACORTA_PROCESSES_H
#define TAREACORTA_PROCESSES_H

#include <iostream>

using namespace std;

class processes {

private:
    int time;

public:
    processes();

    static processes& getInstance(){
        static processes instance;
        return instance;
    }

    void processA(int time);
    void processB(int time);
    void processC(int time);
    void processD(int time);
    void processE(int time);
    void processF(int time);

};


#endif //TAREACORTA_PROCESSES_H
