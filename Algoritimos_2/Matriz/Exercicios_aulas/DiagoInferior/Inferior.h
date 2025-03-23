#ifndef INFERIOR_H_INCLUDED
#define INFERIOR_H_INCLUDED

class Inferior{
private:
    int *vet;
    int n;
    int detInd(int i, int j);

public:
    Inferior(int ordem);
    ~Inferior();
    int get(int i, int j);
    void set(int i, int j, int val);
    bool ehQuadrada();
    void preenche();
    void imprime();
};


#endif // INFERIOR_H_INCLUDED
