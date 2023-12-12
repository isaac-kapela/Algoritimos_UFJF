#include <iostream>
#include <iomanip>
using namespace std;

typedef struct est_Data {
    int dia;
    int mes;
    int ano;
} Data;

void diferencaEntreDatas(const Data& data1, const Data& data2) {
    int difAno, difMes, difDia;

    // Calcula a diferença nos anos
    difAno = data2.ano - data1.ano;

    // Calcula a diferença nos meses
    difMes = data2.mes - data1.mes;

    // Calcula a diferença nos dias
    difDia = data2.dia - data1.dia;

    // Ajusta os valores para garantir que difMes e difDia sejam positivos
    if (difMes < 0) {
        difAno--;
        difMes += 12;
    }
    if (difDia < 0) {
        difMes--;
        difDia += 30;  // Considerando que todos os meses têm 30 dias
    }

    cout << difDia << " dia(s), " << difMes << " mes(es) e " << difAno << " ano(s)" << endl;
}

int main() {
    Data data1, data2;

    // Leitura dos dados da primeira data
    cout << "Digite a primeira data (dia mes ano): ";
    cin >> data1.dia >> data1.mes >> data1.ano;

    // Leitura dos dados da segunda data
    cout << "Digite a segunda data (dia mes ano): ";
    cin >> data2.dia >> data2.mes >> data2.ano;

    // Chama a função para calcular a diferença e imprimir o resultado
    diferencaEntreDatas(data1, data2);

    return 0;
}
