#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    float produto;
    cout << "Digite o valor do produto: ";
    cin >> produto;

    produto = produto * 0.75;
        cout << "O valor do produto com desconto é: " << produto << endl;

return 0;
}