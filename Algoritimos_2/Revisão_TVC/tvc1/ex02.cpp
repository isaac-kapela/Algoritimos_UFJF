#include <iomanip>
#include <iostream>
using namespace std;

int *redimensiona(int *vet, int tam, int novoTam)
{

    int *vet2;
    if (novoTam <= tam)
    {
        return vet;
    }

    else
    {
        int *vet2 = new int[novoTam];
        for (int i = 0, j = novoTam; i<tam, j> tam; i++, j--)
        {
            vet2[i] = vet[i];
            vet2[j] = 0;
        }
    }
    delete [] vet2;
}

int main()
{
    int tam, novoTam;
    cin >> tam;
    cin >> novoTam;
    int *vet = new int[tam];

    for(int i =0; i < tam; i++){
        cin >> vet[i];
    }
    redimensiona(vet, tam, novoTam);

    for(int i = 0; i < novoTam; i++){
        cout << vet[i] << " ";
    }

    delete [] vet;


    return 0;
}