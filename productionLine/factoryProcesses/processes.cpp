#include "processes.h"
#include <unistd.h>

processes::processes() {

}

void processes::processA(int time) {
    this->time = time;
    cout << "Ejecutando Proceso A: " << endl;
    while(time != 0){
        cout << ". " << flush;
        time --;
        usleep(1000000);
    }
    cout << "\nProceso Finalizado" << endl;
}

void processes::processB(int time) {
    this->time = time;
    cout << "Ejecutando Proceso B: " << endl;
    while(time != 0){
        cout << ". " << flush;
        time --;
        usleep(1000000);
    }
    cout << "\nProceso Finalizado" << endl;
}

void processes::processC(int time) {
    this->time = time;
    cout << "Ejecutando Proceso C: " << endl;
    while(time != 0){
        cout << ". " << flush;
        time --;
        usleep(1000000);
    }
    cout << "\nProceso Finalizado" << endl;
}

void processes::processD(int time) {
    this->time = time;
    cout << "Ejecutando Proceso D: " << endl;
    while(time != 0){
        cout << ". " << flush;
        time --;
        usleep(1000000);
    }
    cout << "\nProceso Finalizado" << endl;
}

void processes::processE(int time) {
    this->time = time;
    cout << "Ejecutando Proceso E: " << endl;
    while(time != 0){
        cout << ". " << flush;
        time --;
        usleep(1000000);
    }
    cout << "\nProceso Finalizado" << endl;
}

void processes::processF(int time) {
    this->time = time;
    cout << "Ejecutando Proceso F: " << endl;
    while(time != 0){
        cout << ". " << flush;
        time --;
        usleep(1000000);
    }
    cout << "\nProceso Finalizado" << endl;
}
