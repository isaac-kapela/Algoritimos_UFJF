#ifndef CONTIGUA_H_INCLUDED
#define CONTIGUA_H_INCLUDED

class Contigua
{
public:
    Contigua(int tam);
    ~Contigua();

    int get(int k);
    void insere(int val);
    void remove(int val);
    void imprime();
    bool busca(int val);
    bool troca(int posicao1, int posicao2);

private:
    int max;
    int n;
    int *vet;
    int buscaBinaria(int val);

};

#endif // CONTIGUA_H_INCLUDED
