#ifndef TADTRIDIAGONAL_H_INCLUDED
#define TADTRIDIAGONAL_H_INCLUDED

class TadTridigonal
{
private:
    int *vet;
    int n;
    bool verifica(int i, int j);

public:
    TadTridigonal(int ordem);
    ~TadTridigonal();
    int get(int i, int j);
    void set(int i, int j, int val);
    void preencheVet();
    void imprimeVet();

};

#endif // TADTRIDIAGONAL_H_INCLUDED
