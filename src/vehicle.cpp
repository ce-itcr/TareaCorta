#include "vehicle.h"


Vehicle::Vehicle(int a, int b, int c, int d, int e, int f, int cNum) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->e = e;
    this->f = f;
    this->cNum = cNum;
    A = *(new Node(a, "a", cNum, getNumbOfVeh()));
    B = *(new Node(b, "b", cNum, getNumbOfVeh()));
    C = *(new Node(c, "c", cNum, getNumbOfVeh()));
    D = *(new Node(d, "d", cNum, getNumbOfVeh()));
    E = *(new Node(e, "e", cNum, getNumbOfVeh()));
    F = *(new Node(f, "f", cNum, getNumbOfVeh()));
}

Vehicle::Vehicle(int vehicleId){
    this->vehicleId = vehicleId;
    if(vehicleId==0){
        this->processesOrder[0]={'A'};
        this->processesOrder[1]={'B'};
        this->processesOrder[2]={'C'};
        this->processesOrder[3]={'D'};
        this->processesOrder[4]={'E'};
        this->processesOrder[5]={'F'};
        this->processesTime[0]={2};
        this->processesTime[1]={2};
        this->processesTime[2]={4};
        this->processesTime[3]={1};
        this->processesTime[4]={3};
        this->processesTime[5]={1};
    } else if(vehicleId==1){
        this->processesOrder[0]={'A'};
        this->processesOrder[1]={'C'};
        this->processesOrder[2]={'B'};
        this->processesOrder[3]={'E'};
        this->processesOrder[4]={'D'};
        this->processesOrder[5]={'F'};
        this->processesTime[0]={2};
        this->processesTime[1]={1};
        this->processesTime[2]={1};
        this->processesTime[3]={2};
        this->processesTime[4]={3};
        this->processesTime[5]={1};
    } else if(vehicleId==2){
        this->processesOrder[0]={'A'};
        this->processesOrder[1]={'E'};
        this->processesOrder[2]={'D'};
        this->processesOrder[3]={'C'};
        this->processesOrder[4]={'B'};
        this->processesOrder[5]={'F'};
        this->processesTime[0]={1};
        this->processesTime[1]={4};
        this->processesTime[2]={3};
        this->processesTime[3]={2};
        this->processesTime[4]={1};
        this->processesTime[5]={1};
    } else if(vehicleId==3){
        this->processesOrder[0]={'B'};
        this->processesOrder[1]={'A'};
        this->processesOrder[2]={'D'};
        this->processesOrder[3]={'C'};
        this->processesOrder[4]={'F'};
        this->processesOrder[5]={'E'};
        this->processesTime[0]={2};
        this->processesTime[1]={1};
        this->processesTime[2]={4};
        this->processesTime[3]={3};
        this->processesTime[4]={2};
        this->processesTime[5]={1};
    } else if(vehicleId==4){
        this->processesOrder[0]={'E'};
        this->processesOrder[1]={'F'};
        this->processesOrder[2]={'B'};
        this->processesOrder[3]={'C'};
        this->processesOrder[4]={'A'};
        this->processesOrder[5]={'D'};
        this->processesTime[0]={4};
        this->processesTime[1]={1};
        this->processesTime[2]={2};
        this->processesTime[3]={4};
        this->processesTime[4]={1};
        this->processesTime[5]={3};
    } else if(vehicleId==5){
        this->processesOrder[0]={'F'};
        this->processesOrder[1]={'D'};
        this->processesOrder[2]={'C'};
        this->processesOrder[3]={'B'};
        this->processesOrder[4]={'E'};
        this->processesOrder[5]={'A'};
        this->processesTime[0]={1};
        this->processesTime[1]={1};
        this->processesTime[2]={2};
        this->processesTime[3]={4};
        this->processesTime[4]={3};
        this->processesTime[5]={4};
    }
}


/**
 * @title moveAlong
 * @brief
 */
void Vehicle::moveAlong(){     
    Processes* Agenda=&Processes::getInstance();
      if (actualState==6){
          return;
      }

      bool nopausa=Agenda->consultProcess(processesOrder[actualState]-65,vehicleId);
      if(!nopausa){
          message='P';
          return;
      }

      if (timeElapsed==processesTime[actualState]) {
          Agenda->takeProcess(processesOrder[actualState]-65,this->vehicleId);
          actualState++;
          timeElapsed=0;
          Agenda->putProcess(processesOrder[actualState]-65,this->vehicleId);
      }

      timeElapsed++;

      if (actualState==6){
          timeElapsed=0;
          Agenda->takeProcess(processesOrder[5]-65,this->vehicleId);
          message='R';
          return;
      }
       message=processesOrder[actualState];
}

/**
 * @title start
 * @brief
 */
void Vehicle::start(){
    Processes* main=&Processes::getInstance();
    main->putProcess(processesOrder[0]-65,this->vehicleId);
}

char Vehicle::getActualProcess(){
    return message;
}

int Vehicle::getActualStateAux(){
    float t1=timeElapsed;
    float t2=processesTime[actualState];
    return (t1/t2)*100;
}

int Vehicle::getActualState() const{
    return processesOrder[actualState]-65;
}

void Vehicle::setActualState(int value){
    actualState = value;
}

int* Vehicle::getA() {
    return &a;
}

int *Vehicle::getB() {
    return &b;
}

int *Vehicle::getC() {
    return &c;
}

int *Vehicle::getD() {
    return &d;
}

int *Vehicle::getE() {
    return &e;
}

int *Vehicle::getF() {
    return &f;
}

int Vehicle::getCNum() const {
    return cNum;
}

int Vehicle::getNumbOfVeh() {
//    if (cNum == 1)
//        return Util::car1Num;
//    else if (cNum == 2)
//        return Util::car2Num;
//    else if (cNum == 3)
//        return Util::car3Num;
//    else if (cNum == 4)
//        return Util::car4Num;
//    else if (cNum == 5)
//        return Util::car5Num;
//    else if (cNum == 6)
//        return Util::car6Num;
}

