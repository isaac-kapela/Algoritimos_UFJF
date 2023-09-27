#include <iostream>
#include <iomanip>
using namespace std;

    int ler(int n){
        int contador =1;
        int cont =0;
        int num;

        while (contador <= n) {
            cout <<" digite os valores";

             cin >> num ;
       
            if(num < 0){
                cont++;
            }
            contador++;
        }
        

    }

int main() {
    int n1;
    cout << "Quantos numeros voce quer ler /n";
    cin >> n1;
    ler(n1);

    return 0;




}
