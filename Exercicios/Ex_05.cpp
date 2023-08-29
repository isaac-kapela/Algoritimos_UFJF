        // Exercicios da lista 1
        // b.) b + c * a

        
        #include <iostream>

        using namespace std;
        
             int main() {
     
         int a,b,c;

         int verdadeiroResultado;

         int resultado;
         
         cout << "Digite os valores que devem ser calculados: ";
         
         cin >> a >> b >> c;
         
          resultado = a + b ;
         
         verdadeiroResultado = resultado * c;
         
         cout << verdadeiroResultado ;
         
          return 0;
             }