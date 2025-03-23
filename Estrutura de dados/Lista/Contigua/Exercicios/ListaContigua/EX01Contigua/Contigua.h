#ifndef CONTIGUA_H_INCLUDED
#define CONTIGUA_H_INCLUDED

class Contigua{
public:
    Contigua(int tam);
    ~Contigua();
    int get(int k);
    void insere(int val);
    void remove(int val);
    bool busca(int val);
    void imprime();
    void transfereParaListaOrdenada(int *listaTradicional int tamanho);

private:
    int max;
    int n;
    int *vet;
    int buscaBinaria(int val);

};


#endif // CONTIGUA_H_INCLUDED
