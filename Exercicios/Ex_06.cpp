 // Exercicios da lista 1
 //c. (a + c) / (2 * b)

     #include <iostream>

        using namespace std;
        
        int calcular( int valor1, int valor2, int valor3, int valor4) {
            return (valor1 + valor2) / (valor3 + valor4);
        }
        
        int main() {
            
            int a, b, c, d;
            c = 2;
            
            cout << "Digite os valores que devem ser calculados: ";
            
            cin >> a >> b >> c;
            
            cout << calcular(a,b,c,d);
            
            return 0;
            
        
        }