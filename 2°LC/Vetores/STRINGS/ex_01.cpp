#include <iomanip>
#include <iostream>
#include <cstring>
#define MAX_VETOR 500
using namespace std;
int espaco(char vet[], int tam)
{
    int cont = 0;

    for (int i = 0; i < tam; i++)
    {
        if (vet[i] == ' ')
        {
            cont++;
        }
    }
     return cont;
}

int main()
{
    char vet[MAX_VETOR];
    int tam;
    cin.getline(vet, MAX_VETOR);
    tam = strlen(vet);
cout <<"Espaços: "<<  espaco(vet, tam);

    return 0;
}