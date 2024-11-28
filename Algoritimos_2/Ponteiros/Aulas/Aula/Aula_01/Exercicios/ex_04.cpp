#include <iomanip>
#include <iostream>
using namespace std;

bool func(int tam, int vet[], int *par, int *imp, int *neg)
{
    for (int i = 0; i < tam; i++)
    {
        if (vet[i] % 2 == 0)
        {
            *par++;
        }
        else if (vet[i] % 2 != 0)
        {
            *imp++;
        }
        else if (vet[i] < 0)
        {
            neg++;
        }
    }
     if(neg > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    
}

int main()
{
    int tam, par = 0, imp = 0, neg = 0;
    cin >> tam;
    int vet[tam];
    for (int i = 0; i < tam; i++)
    {
        cin >> vet[i];
    }

    if (func(tam, vet, &par, &imp, &neg))
    {
        cout << "Existem numeros negativos no vetor" << endl;
    }
    else
    {
        cout << "Nao existem numeros negativos no vetor" << endl;
    }

    return 0;
}