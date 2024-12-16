#include <iomanip>
#include <iostream>
using namespace std;

bool buscaBinaria(int vet[], int n, int chave)
{
    if (n == 0)
    {
        return false;
    }
    else if (n == 1)
    {
        if (vet[0] == chave)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    if(vet[n-1] == chave){
        return true;

    }

    else{
        return buscaBinaria(vet, n-1, chave);
    }
}

int main()
{

    return 0;
}