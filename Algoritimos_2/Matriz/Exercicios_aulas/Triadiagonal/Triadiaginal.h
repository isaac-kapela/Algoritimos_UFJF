#ifndef TRIADIAGINAL_H_INCLUDED
#define TRIADIAGINAL_H_INCLUDED

class Triadiagonal {

private:
    int *vet;
    int n;
    int dentInd(int i, int j);
    Triadiagonal *CriaCopia();

public:
    Triadiagonal(int ordem);
    ~Tridiagonal();
    int get(int i, int j);
    void set(int i, int j, int val);


};

#endif // TRIADIAGINAL_H_INCLUDED
