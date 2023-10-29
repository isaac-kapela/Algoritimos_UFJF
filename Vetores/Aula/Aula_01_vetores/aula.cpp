#include <iostream>
#include <iomanip>
#define TAMANHO 10
using namespace std;

int main()
{
    // Declarando um array de inteiros chamado 's' com tamanho 10
    int s[TAMANHO];

    // Preenchendo o array 's' com valores calculados com base no índice
    for (int j = 0; j <= TAMANHO - 1; j++)
    {
        s[j] = 2 + 2 * j; // Cada elemento é calculado como 2 + 2 * j
    }

    // Imprimindo o cabeçalho da tabela
    cout << "Elemento" << setw(13) << "Valor\n";

    // Iterando sobre o array 's' e imprimindo cada elemento com formatação
    for (int j = 0; j <= TAMANHO - 1; j++)
    {
        cout << setw(5) << j // Imprime o índice (5 caracteres de largura)
             << setw(13) << s[j] << "\n"; // Imprime o valor (13 caracteres de largura)
    }

    return 0;
}
