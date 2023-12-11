#include <iostream>
#include <iomanip>
using namespace std;

struct Pessoa {
    char nome[50];
   char  endereco[50];
    char numero[50];
    char bairro[50];
    char complemento[50];
    char cep[50];
    char cidade[50];
    char  uf[50];
    char  tel1[50];
    char tel2[50];
};

void ler(Pessoa p1) {

    cin >> p1.nome;
    cin >> p1.endereco;
    cin >> p1.numero;
    cin >> p1.bairro;
    cin >> p1.complemento;
    cin >> p1.cep;
    cin >> p1.cidade;
    cin >> p1.uf;
    cin >> p1.tel1; 
    cin >> p1.tel2;

cout << p1.nome << endl;    
cout << p1.endereco << endl;    
cout << p1.numero << endl;  
cout << p1.bairro << endl;
cout << p1.complemento << endl; 
cout    << p1.cep << endl;
cout << p1.cidade << endl;
cout << p1.uf << endl;
cout << p1.tel1 << endl;
cout << p1.tel2 << endl;


}

int main() {
    Pessoa p1, p2 , p3;

    ler(p1);    
    ler(p2);
    ler(p3);
    

    return 0;
}