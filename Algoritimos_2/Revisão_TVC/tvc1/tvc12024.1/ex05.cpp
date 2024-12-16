#include <iomanip>
#include <iostream>
using namespace std;

void indicePares(int *vet, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{

    return 0;
}