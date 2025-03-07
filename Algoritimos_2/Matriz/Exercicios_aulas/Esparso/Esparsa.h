#ifndef ESPARSA_H_INCLUDED
#define ESPARSA_H_INCLUDED
typedef struct
{
    int linha;
    int coluna;
    float valor;
} Tripla;
class Esparsa
{
private:
    int c1,f1;
    int c2,f2;
    int Max;
    int nnz;
    Tripla *tab;
    int detInd(int i, int j);
    void Remove(int k);
    void Insere (int i, int j, float valor);
public:
    Esparsa(int i1,int i2, int j1, int j2, int n);
    ~Esparsa();
    float get(int i, int j);
    void set(int i, int j, float valor);
};


#endif // ESPARSA_H_INCLUDED
