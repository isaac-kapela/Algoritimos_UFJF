
#include <iostream>
#include <iomanip>
using namespace std;

int triangulo(int i, int j, int k)
{

    if (i > 0 && j > 0 && k > 0 && k*k == j*j + i*i)
    {

        cout << "Triangulo  retangulo";
         
        
    }

    else
    {
        cout << "Não é  triangulo retangulo";
        
    }
    
    return 0;
}

int main()
{

    int i, j, k;
    cout << "Digite os valores solicitados: ";
    cin >> i >> j >> k;

    cout << triangulo(i, j, k);

    return 0;
}