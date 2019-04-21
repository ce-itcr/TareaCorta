#include "vehicles.h"
#include "factoryProcesses/processes.h"

vehicles::vehicles() {

}

void vehicles::vehicleSelector(int car) {
    if(car == 1){
        vehicle1();
    } else if(car == 2){
        vehicle2();
    } else if(car == 3){
        vehicle3();
    } else if(car == 4){
        vehicle4();
    } else if(car == 5){
        vehicle5();
    } else if(car == 6){
        vehicle6();
    }
}

void vehicles::vehicle1() {
    cout << "----- Construyendo Vehículo 1 -----" << endl;
    processes* p1 = &processes::getInstance();
    p1->processA(2);
    p1->processB(2);
    p1->processC(4);
    p1->processD(1);
    p1->processE(3);
    p1->processF(1);
    cout << "----- Vehículo 1 Finalizado -----\n" << endl;
}

void vehicles::vehicle2() {
    cout << "----- Construyendo Vehículo 2 -----" << endl;
    cout << "----- Vehículo 2 Finalizado -----\n" << endl;
}

void vehicles::vehicle3() {
    cout << "----- Construyendo Vehículo 3 -----" << endl;
    cout << "----- Vehículo 3 Finalizado -----\n" << endl;
}

void vehicles::vehicle4() {
    cout << "----- Construyendo Vehículo 4 -----" << endl;
    cout << "----- Vehículo 4 Finalizado -----\n" << endl;
}

void vehicles::vehicle5() {
    cout << "----- Construyendo Vehículo 5 -----" << endl;
    cout << "----- Vehículo 5 Finalizado -----\n" << endl;
}

void vehicles::vehicle6() {
    cout << "----- Construyendo Vehículo 6 -----" << endl;
    cout << "----- Vehículo 6 Finalizado -----\n" << endl;
}
