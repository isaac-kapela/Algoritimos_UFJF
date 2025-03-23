#ifndef LISTAORDCONT_H_INCLUDED
#define LISTAORDCONT_H_INCLUDED

class ListaOrdCont{

public:
    ListaOrdCont(int tam);
    ~ListaOrdCont();

    int get(int k);
    void insere(int val);  // insere o val na ordem
    void remove(int val); // remove o no com um valor val
    void imprime();
    bool busca(int val);

private:
    int max  //capacidade maxima de elementos
    int n;  // quantidade de nos na lista
    int *vet; // vetor que armazena a lista
    int buscaBinaria(int val);


};




#endif // LISTAORDCONT_H_INCLUDED
