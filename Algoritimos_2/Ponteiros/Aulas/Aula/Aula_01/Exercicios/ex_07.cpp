#include <iostream>
#include <iomanip>
using namespace std;

void troca(int *a, int *b)
{
    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{

    int a, b;

    cin >> a >> b;
    cout << " A:" << a << " B: " << b << endl;

    troca(&a, &b);

    cout << " A:" << a << " B: " << b;

    return 0;
}