#ifndef DIAGOSECUNDARIA_H_INCLUDED
#define DIAGOSECUNDARIA_H_INCLUDED

class Secundaria{

private:
    int *vet;
    int n;
    int detInd(int i, int j);

public:
    bool ehQuadrada();
    Secundaria(int ordem);
    ~Secundaria();
    int get(int i, int j);
    void set(int i, int j, int val);
    void preenche();
    void imprime();

};

#endif // DIAGOSECUNDARIA_H_INCLUDED
