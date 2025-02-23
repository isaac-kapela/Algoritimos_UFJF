#ifndef DIAGOANTI_H_INCLUDED
#define DIAGOANTI_H_INCLUDED
class DiagoAnti{
private:
    int n;
    int *vet;

public:
    DiagoAnti(int ordem);
    ~DiagoAnti();
   int get(int i, int j);
   void set(int i, int j, int val);
   int detInd(int i, int j);
   void preencheVetor();
   void imprimeVet();


};


#endif // DIAGOANTI_H_INCLUDED
