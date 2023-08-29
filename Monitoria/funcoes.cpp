#include <iostream>

using namespace std;

int soma(int n1, int n2){
    return n1 + n2;
}


int subitracoa(int n1, int n2 ){
    return n1 - n2;
}


int divisao(int n1, int n2){
    return n1 / n2;
}


int multi(int n1, int n2){
    return n1 * n2;
}


int main(){
    int valor1,valor2;
    cin >> valor1 >> valor2;
    cout << divisao(valor1, valor2) << endl;
    return 0;
}