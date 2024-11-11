#include <iostream>
using namespace std;
#define MAX 100

void troca(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

// 
void inverte(int vet[], int n)
{
    for (int i = 0, j =n-1;  i < n / 2; i++, j--)

    {
        
        troca(vet + i, vet + j );
    }
}

int main()
{
    int n;
    int vetor[MAX];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
    inverte(vetor, n);

    for(int i = 0; i < n; i++)
    {
        cout << vetor[i] << " ";
    }

    return 0;
}