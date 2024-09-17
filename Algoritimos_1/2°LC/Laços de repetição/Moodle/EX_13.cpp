#include <iostream>
using namespace std;

float mediaImpares(int n)
{
    int cont = 0;
    int soma = 0;
    float media = 0;
    int valor;

    for(int i = 0; i < n; i++){
        cin >> valor;
        if(valor % 2 != 0){
            soma += valor;
            cont++;
        }
    }

    if(cont == 0){
        cout << "Nenhum numero ímpar na sequencia" << endl;
        return 0;
    }

    media = (float) soma / cont;
    return media;
}

int main(){
    int n;
    cout << "Digite a quantidade de números: ";
    cin >> n;
    cout << "Digite os números: ";
    float media = mediaImpares(n);
    if (media != 0) {
        cout << "Média dos ímpares: " << media << endl;
    }
    return 0;
}