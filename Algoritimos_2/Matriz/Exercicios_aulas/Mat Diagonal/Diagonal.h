#ifndef DIAGONAL_H_INCLUDED
#define DIAGONAL_H_INCLUDED

class Diagonal
{
private:
    int *vet;
    int n;
    int detInd(int i, int j);
    bool ehPar();

public:
    Diagonal(int ordem);
    ~Diagonal();
    int get(int i, int j);
    void set(int i, int j, int val);
    void preenche();
    void imprime();



};

#endif // DIAGONAL_H_INCLUDED
