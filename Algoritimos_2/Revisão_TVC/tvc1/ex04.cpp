#include <iomanip>
#include <iostream>
using namespace std;
int auxiliarInverte(int vet[], int i, int n)
{

    if (i >= n)
    {
        return 0;
    }
    else
    {
        int aux = vet[i];
        vet[i] = vet[n];
        vet[n] = aux;

        return auxiliarInverte(vet, i + 1, n - 1);
    }
}

void inverte(int vet[], int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        auxiliarInverte(vet, 0, n - 1);
    }
}

void leitura(int vet[], int n)
{

    if (n == 0)
    {
        return;
    }
    else
    {
        cin >> vet[n - 1];
        leitura(vet, n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int *vet = new int[n];
    leitura(vet, n);
    inverte(vet, n);

    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << " ";
    }

    return 0;
}