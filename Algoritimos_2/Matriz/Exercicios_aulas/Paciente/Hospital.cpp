#include "Hospital.h"
#include "Paciente.h"
#include <iostream>
using namespace std;

Hospital::Hospital() {
    n = 0;
}


Hospital::~Hospital(){
    for(int i =0; i < n; i++){
        delete pacientes[i];
    }
}

void Hospital::novoPaciente(string nome, int idade, string cid){

    if(n>=max){

        return;
    }
    else{
        pacientes[n] = new Paciente(nome, idade);
        pacientes[n]->setCID(cid);
        n++;
    }
}

void Hospital::listaPacientesRisco() {
    for(int i = 0; i < n; i++) {
        if(pacientes[i]->getIdade() >= 60) {
            pacientes[i]->imprime(); // Imprime as informações do paciente.
        }
    }
}


