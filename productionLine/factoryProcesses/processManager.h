/**
 * @file processManager.h
 * @version 1.0
 * @date 21/04/19-
 * @authors angelortizv
 * @title Agenda de Procesos.
 * @brief Encargada de manejar los procesos para todas las solicitudes de las líneas de producción.
 */

#ifndef TAREACORTA_PROCESSMANAGER_H
#define TAREACORTA_PROCESSMANAGER_H

#include <iostream>

using namespace std;

class processManager {

private:
public:
    processManager();

    static processManager& getInstance(){
        static processManager instance;
        return instance;
    }



};


#endif //TAREACORTA_PROCESSMANAGER_H
