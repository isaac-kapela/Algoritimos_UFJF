#ifndef TADDIAGONAL_H_INCLUDED
#define TADDIAGONAL_H_INCLUDED
class TadDiagonal
{
private:
    int *vet;
    int n;
    bool verifica(int i, int j);

public:
    TadDiagonal(int ordem);
    ~TadDiagonal();
    int get(int i, int j);
    void set(int i, int j, int valor);
    void preencheVetor();
    void imprimeVetor();


};

#endif // TADDIAGONAL_H_INCLUDED
