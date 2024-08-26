#include <iostream>
#define t 30

int calcularProdutoEscalar(int vetor1[], int vetor2[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        int escalar = vetor1[i] * vetor2[i];
        soma += escalar;
    }
    return soma;
}

int main() {
    int tamanho;
        
   std:: cin >> tamanho;
    int vetor1[tamanho];
    int vetor2[tamanho];
   
   for(int i=0; i < tamanho; i++){
      std:: cin >> vetor1[i];
   }
   for(int i=0; i < tamanho; i++){
      std:: cin >> vetor2[i];
   }

    std::cout << "A soma das multiplicações é: " << calcularProdutoEscalar(vetor1, vetor2, tamanho) << std::endl;;

    

    return 0;
}
