#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
#define TAM 100
int relacao(int matriz[TAM][TAM], int vet[], int total)
{

    for (int i = 0; i < total; i++)
    {
        int soma = 0;

        for (int j = 0; j < total; j++)
        {
            // if (i == j)
            // {

            // }
            // else if (matriz[1][2] && matriz[2][1])
            // {
            //     matriz[i][j] = 1;
            // }
            // else
            // {
            //     matriz[i][j] = 0;
            // }
            soma = soma + matriz[i][j];
        }
        vet[i] = soma;
    }
    int menor = 0; // vet[0];

    for (int i = 0; i < total; i++)
    {
        if (vet[menor] < vet[i])
        {
            menor = i;
        }
    }
    return menor;
}

int main()
{
    int total;
    cin >> total;
    int vet[total];
    int m[TAM][TAM];

    for (int i = 0; i < total; i++)
    {
        for (int j = 0; j < total; j++)
        {
            cin >> m[i][j];
        }
    }

    cout << relacao(m, vet, total);
    return 0;
}