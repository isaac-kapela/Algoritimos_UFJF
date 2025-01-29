#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int *vet = new int[n];
    int aux = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vet[j] < vet[j + 1])
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j+1] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << vet[i];
    }
    delete[] vet;

    return 0;
}