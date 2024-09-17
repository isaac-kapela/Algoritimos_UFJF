// Exercicios da lista 1
//  d.) a % b - c
#include <iostream>

using namespace std;

int calcular(int valor1, int valor2, int valor3)
{
    return valor1 % valor2 - valor3;

    
}

int main()
{

    int a, b, c;

    cout << "Digite os valores que devem ser calculados: ";
    cin >> a >> b >> c;

    cout << calcular(a, b, c);

    return 0;
}