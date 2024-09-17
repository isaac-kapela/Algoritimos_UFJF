#include <iostream>
using namespace std;

void piramedi(int n) { 
   int contador = 1;
   while (contador <= n)
   {
        int contador2 = 1;
        while (contador2 <= contador)
        {
             cout << contador2 << " ";
             contador2++;
        }
        cout << endl;
        contador++;
   }
}

int main(){
    int n;
    cout << "Digite o valor de n: ";
    cin >> n;
    piramedi(n); 
    return 0;
}
