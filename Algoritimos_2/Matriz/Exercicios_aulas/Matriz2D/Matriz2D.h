#ifndef MATRIZ2D_H_INCLUDED
#define MATRIZ2D_H_INCLUDED
class Matriz2D{

public:
    Matriz2D(int linha, int coluna);
    ~Matriz2D();
    int get(int i, int j);
    void set(int i, int j, int val);
    void preencheMat();
    void imprimeMat();


private:
    int numLinhas;
    int numColunas;
    int **mat;
    bool verifica(int i, int j);

};


#endif // MATRIZ2D_H_INCLUDED
