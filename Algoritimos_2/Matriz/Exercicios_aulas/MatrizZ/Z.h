#ifndef Z_H_INCLUDED
#define Z_H_INCLUDED

class Z{
private:
    int *vet;
    int n;
    int linha, coluna;
    int detInd(int i, int j);
    bool ehQuadrada();
    z* criaCopia();

public:
    Z(int linha, int coluna);
    ~Z();
    int get(int i, int j);
    void set(int i, int j, int val);



};


#endif // Z_H_INCLUDED
