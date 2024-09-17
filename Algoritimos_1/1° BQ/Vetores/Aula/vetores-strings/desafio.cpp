
#include <iostream>
#include <iomanip>
using namespace std;
void lerVetor(float vetor[], int ind)

{
    for (int i = 0; i < ind; i++)
    {
    cin >> vetor[i];
    }
}

void imprimirVetor(float vetor[], int ind){
    cout << endl;
    for (int i = 0; i < ind; i++)
    {
    cout << vetor[i] << " ";
    }
}