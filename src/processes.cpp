#include "processes.h"

Processes::Processes(){

}

/**
 * @brief Processes::takeProcess
 * @param actualProcess
 * @param vehicle
 */
void Processes::takeProcess(int actualProcess, int vehicle){
    for(int i=0; i<3; i++){
        if(processes[actualProcess][i] == vehicle){
            processes[actualProcess][i] = 8;
            return;
        }
    }
}

/**
 * @brief Processes::putProcess
 * @param actualProcess
 * @param vehicle
 */
void Processes::putProcess(int actualProcess, int vehicle){
    for (int i=0;i<3;i++){
        if (processes[actualProcess][i]==8){
            processes[actualProcess][i]=vehicle;
            return;
        }
    }
    processes[actualProcess][0]=vehicle;
}

/**
 * @brief Processes::consultProcess
 * @param actualProcess
 * @param vehicle
 * @return boolean
 */
bool Processes::consultProcess(int actualProcess, int vehicle){
    for (int i=0;i<3;i++){
        if (processes[actualProcess][i]==vehicle){
            return true;
        }
    }
    return false;
}

/**
 * @brief Processes::printProcesses
 */
void Processes::printProcesses(){
    char c;
    for (int i=0;i<6;i++){
        c=i+65;
        cout<<"Proceso "<<c<<":";
        for (int j=0;j<3;j++){
            if (processes[i][j]==8){
                cout<<"#"<<"-";
            }
            else{
                cout<<processes[i][j]+1<<"-";
            }
        }
        cout<<endl;
    }
//    cout<<"------------------- Fin del reporte -------------------\n" << endl;
}
