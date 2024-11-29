#include <iomanip>
#include <iostream>
using namespace std;

void trocaMaior(int vet[], int n, int *m)
{
    *m = vet[0];
    for (int i = 0; i < n; i++)
    {
        if (vet[i] > *m)
        {
            *m = vet[i];
        }
    }
    cout << "Maior valor: " << *m << endl;
}

int main()
{

    int n, m;
    cin >> n;
    int vet[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    trocaMaior(vet, n, &m);

    return 0;
}