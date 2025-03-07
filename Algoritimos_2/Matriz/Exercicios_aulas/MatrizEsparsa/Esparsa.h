#ifndef ESPARSA_H_INCLUDED
#define ESPARSA_H_INCLUDED

typedef struct{
    int linha;
    int coluna;
    int val;
} Tripla;

class Esparsa{
private:
    int linhaLimiteIncial, linhaLimiteFinal;
    int colunaLimiteInicial, colunaLimiteFinal;
    int max;
    int numNaoZero;
    Tripla*tab;
    int detInd(int i, int j);
    void remove(int k);
    void insere(int i, int j, int val);

public:
    Esparsa(int i1, i2, int j1, int j2, int n);
    ~Esparsa();
    int get(int i, int j);
    void set(int i, int j, int val);


};

#endif // ESPARSA_H_INCLUDED
