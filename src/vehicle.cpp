#include "vehicle.h"

Vehicle::Vehicle(int vehicleId){
    this->vehicleId=vehicleId;
        if (vehicleId==0){
            this->processesOrder[0]={'A'};
            this->processesOrder[1]={'B'};
            this->processesOrder[2]={'C'};
            this->processesOrder[3]={'D'};
            this->processesOrder[4]={'E'};
            this->processesOrder[5]={'F'};
            this->processesTime[0]={5};
            this->processesTime[1]={2};
            this->processesTime[2]={4};
            this->processesTime[3]={1};
            this->processesTime[4]={3};
            this->processesTime[5]={1};

        }
        if (vehicleId==1){
            this->processesOrder[0]={'A'};
            this->processesOrder[1]={'C'};
            this->processesOrder[2]={'B'};
            this->processesOrder[3]={'E'};
            this->processesOrder[4]={'D'};
            this->processesOrder[5]={'F'};
            this->processesTime[0]={5};
            this->processesTime[1]={1};
            this->processesTime[2]={1};
            this->processesTime[3]={2};
            this->processesTime[4]={3};
            this->processesTime[5]={1};

        }
        if (vehicleId==2){
            this->processesOrder[0]={'A'};
            this->processesOrder[1]={'E'};
            this->processesOrder[2]={'D'};
            this->processesOrder[3]={'C'};
            this->processesOrder[4]={'B'};
            this->processesOrder[5]={'F'};
            this->processesTime[0]={5};
            this->processesTime[1]={4};
            this->processesTime[2]={3};
            this->processesTime[3]={2};
            this->processesTime[4]={1};
            this->processesTime[5]={1};

        }
        if (vehicleId==3){
            this->processesOrder[0]={'B'};
            this->processesOrder[1]={'A'};
            this->processesOrder[2]={'D'};
            this->processesOrder[3]={'C'};
            this->processesOrder[4]={'F'};
            this->processesOrder[5]={'E'};
            this->processesTime[0]={2};
            this->processesTime[1]={4};
            this->processesTime[2]={4};
            this->processesTime[3]={3};
            this->processesTime[4]={2};
            this->processesTime[5]={1};

        }
        if (vehicleId==4){
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

        }
        if (vehicleId==5){
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

void Vehicle::moveAlong(){
    Processes* Agenda=&Processes::getInstance();
      if (actualState==6){
          return;
      }

      bool pause=Agenda->consultProcess(processesOrder[actualState]-65,vehicleId);
      if(!pause){
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

