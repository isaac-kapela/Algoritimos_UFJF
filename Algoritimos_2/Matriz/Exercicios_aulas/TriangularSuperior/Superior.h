#ifndef SUPERIOR_H_INCLUDED
#define SUPERIOR_H_INCLUDED

class Superior{

    private:
        int *vet;
        int n;
        bool verifica(int i, int j);


    public:
        Superior(int ordem);
        ~Superior();
        int get(int i, int j);
        void set(int i, int j, int val);
        void preencheVet();
        void imprimeVet();

};


#endif // SUPERIOR_H_INCLUDED
