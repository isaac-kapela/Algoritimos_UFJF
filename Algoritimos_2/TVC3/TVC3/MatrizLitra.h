#ifndef MATRIZLITRA_H_INCLUDED
#define MATRIZLITRA_H_INCLUDED

// Essa matriz vai ter m linhas e n colunas
// Vou armazenar essa matriz num vetor e apenas os valores nao nulos
// para isso vou precisar de (n/2)*m posicoes

class MatrizListra
{
public:
    MatrizListra(int linhas, int colunas);
    int getElemento(int i, int j);
    void setElemento(int i, int j, int val);
    bool ehQuadrada();
    ~MatrizListra();
    void imprime();
private:
    int k; // indice do elemento aij da matriz no vetor
    int detInd(int i, int j); // Retorna o indice do elemento aij da matriz no vetor
    int *vet; // Meu vetor para armazenar os valores da matriz
    int m, n; // m linhas e n colunas
    int qtdPosicoes; // Quantas posicoes o vetor possui

};


#endif // MATRIZLITRA_H_INCLUDED
