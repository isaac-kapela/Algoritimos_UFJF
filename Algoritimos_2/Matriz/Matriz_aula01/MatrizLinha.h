#ifndef MATRIZLINHA_H_INCLUDED
#define MATRIZLINHA_H_INCLUDED

    class MatrizLinha{
    public:
        MatrizLinha(int linha, int coluna);
        ~MatrizLinha();
        int get(int i, int j);
        int set(int i, int j, int val);


    private:
        int  numLinha, numColuna;
        int *vet;

        bool detInd(int i, int j);

    };




#endif // MATRIZLINHA_H_INCLUDED
