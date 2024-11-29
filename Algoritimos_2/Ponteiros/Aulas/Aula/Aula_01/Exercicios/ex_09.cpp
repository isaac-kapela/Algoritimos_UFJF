#include <iomanip>
#include <iostream>
#define MAX 100

using namespace std;

void troca(int *a, int *b)
{
    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;
}

void inverte(int vet[], int n)
{
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {

        troca(vet + i, vet + j);
    }
}

int main()
{

    int vet[MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << "";
    }

    cout << endl;

    inverte(vet, n);

    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << "";
    }

    return 0;
}