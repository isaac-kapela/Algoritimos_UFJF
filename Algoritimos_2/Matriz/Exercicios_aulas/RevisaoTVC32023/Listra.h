#ifndef LISTRA_H_INCLUDED
#define LISTRA_H_INCLUDED

class Listra{

public:
    Listra(int m, int n);
    //int tam = n/2*m;
    ~Listra();
    int get(int i, int j);
    void set(int i, int j, int val);
    bool ehQuadrada();
    int detInd(int i, int j);

private:
    int *vet;
    Listra* criaCopia();
    int nl, nc;

};

#endif // LISTRA_H_INCLUDED
