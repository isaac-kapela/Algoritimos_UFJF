#ifndef TADTRIANGULAR_H_INCLUDED
#define TADTRIANGULAR_H_INCLUDED


class TADTriangular{
private:
    int n;
    int *vetor;
    bool verifica(int i, int j);

public:
    TADTriangular(int ordem);
    ~TADTriangular();
    int get(int i, int j);
    void set(int i, int j, int val);
    void imprimeVetor();
    void preencheVetor();




};
#endif
