#include <iostream>
#include <cstring>

using namespace std;

const int NP = 5; 
const int ND = 3; 

struct Pizza {
    char sabor[50];
    char tipo[10];
    int tempoPreparo;
    int pedidosPorDia[ND];
};

int PizzaMaisPedida(Pizza pizzas[], int tamanho) {
    int maxPedidos = -1;
    int indice = -1;
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(pizzas[i].tipo, "especial") == 0 && pizzas[i].tempoPreparo < 45) {
            int totalPedidos = 0;
            for (int j = 0; j < ND; j++) {
                totalPedidos += pizzas[i].pedidosPorDia[j];
            }
            if (totalPedidos > maxPedidos) {
                maxPedidos = totalPedidos;
                indice = i;
            }
        }
    }
    return indice;
}

int main() {
    Pizza pizzas[NP];
    for (int i = 0; i < NP; i++) {
        cin >> pizzas[i].tipo;
        cin.ignore();
        cin.getline(pizzas[i].sabor, 50);
        cin >> pizzas[i].tempoPreparo;
        for (int j = 0; j < ND; j++) {
            cin >> pizzas[i].pedidosPorDia[j];
        }
    }

    int indice = PizzaMaisPedida(pizzas, NP);
    if (indice != -1) {
        cout << "Sabor: " << pizzas[indice].sabor << endl;
        cout << "Pedidos: " << pizzas[indice].pedidosPorDia[ND-1] << endl;
    } else {
        cout << "Nenhuma pizza retornada" << endl;
    }

    return 0;
}