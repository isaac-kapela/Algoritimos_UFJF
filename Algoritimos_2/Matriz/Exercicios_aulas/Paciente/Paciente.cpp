#include "Paciente.h"
#include <iostream>
using namespace std;

Paciente::Paciente(string n, int i) {
    nome = n;
    idade = i;
    cid = "";
}

void Paciente::setCID(string codigo) {
    int tamanho = 0;
    while(codigo[tamanho] != '\0') {
        tamanho++;
    }

    if(tamanho != 3) {
        cout << "Erro: codigo CID invalido" << endl;
        return;
    }
    if(codigo[0] < 'A' || codigo[0] > 'Z') {
        cout << "Primeiro caractere tem que ser uma letra maiúscula" << endl;
        return;
    }
    if(codigo[1] < '0' || codigo[1] > '9' || codigo[2] < '0' || codigo[2] > '9') {
        cout << "Os 2 últimos caracteres devem ser números" << endl;
        return;
    }

    cid = codigo;
}

void Paciente::imprime() {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "CID: " << cid << endl;
}

