#ifndef X_H_INCLUDED
#define X_H_INCLUDED

class X{
private:
    int n;
    int *vet;
    int detIndPar(int i, int j);
    int detIndImpar(int i, int j);
    int detInd(int i , int j);


public:
    X(int ordem);
    ~X();
    int get(int i, int j);
    void set(int i, int j, int val);
    bool ehQuadrada();
    void preenche();
    void imprime();
    bool nula();

};

#endif // X_H_INCLUDED
