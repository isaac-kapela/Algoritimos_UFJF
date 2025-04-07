#include <iostream>
#include <algorithm>
#include "NoABB.h"

using namespace std;

NoABB::NoABB(int valor) {
    this->valor = valor;
    this->esq = NULL;
    this->dir = NULL;
    this->altura = -1;
}

NoABB::~NoABB() {
    delete this->esq;
    delete this->dir;
}

int NoABB::getValor() { return this->valor; }
NoABB* NoABB::getEsq() { return this->esq; }
NoABB* NoABB::getDir() { return this->dir; }
void NoABB::setValor(int valor) { this->valor = valor; }
void NoABB::setEsq(NoABB* no) { this->esq = no; }
void NoABB::setDir(NoABB* no) { this->dir = no; }


int NoABB::soma() {
    int soma = this->valor;
    if (this->esq != NULL) {
        soma += this->esq->soma();
    }
    if (this->dir != NULL) {
        soma += this->dir->soma();
    }
    return soma;
}

float NoABB::media() {
    int total = this->contaNos();
    if (total == 0) return 0;
    return (float)this->soma() / total;
}

bool NoABB::ehCheia() {
    if (this->esq == NULL && this->dir == NULL) {
        return true;
    }
    if (this->esq != NULL && this->dir != NULL) {
        return this->esq->ehCheia() && this->dir->ehCheia();
    }
    return false;
}

bool NoABB::ehCompleta(int indice, int n) {
    if (this == NULL) return true;
    if (indice >= n) return false;
    return esq->ehCompleta(2*indice + 1, n) && dir->ehCompleta(2*indice + 2, n);
}

bool NoABB::estritamenteBinaria() {
    if (this->esq == NULL && this->dir == NULL) {
        return true;
    }
    if (this->esq != NULL && this->dir != NULL) {
        return this->esq->estritamenteBinaria() && 
               this->dir->estritamenteBinaria();
    }
    return false;
}

void NoABB::imprimeIntervalo(int x, int y) {
    if (this->esq != NULL && this->valor > x) {
        this->esq->imprimeIntervalo(x, y);
    }
    if (this->valor >= x && this->valor <= y) {
        cout << this->valor << " ";
    }
    if (this->dir != NULL && this->valor < y) {
        this->dir->imprimeIntervalo(x, y);
    }
}


int NoABB::maioresQue(int valor) {
    int contador = (this->valor > valor) ? 1 : 0;
    if (this->esq != NULL) {
        contador += this->esq->maioresQue(valor);
    }
    if (this->dir != NULL) {
        contador += this->dir->maioresQue(valor);
    }
    return contador;
}

float NoABB::mediaNivel(int nivel) {
    float soma = 0;
    int contador = 0;
    this->somaContadorPorNivel(nivel, 0, soma, contador);
    return (contador == 0) ? 0 : soma / contador;
}

void NoABB::alturaNos() {
    this->calculaAltura();
    if (this->esq != NULL) {
        this->esq->alturaNos();
    }
    if (this->dir != NULL) {
        this->dir->alturaNos();
    }
}


int NoABB::contaNos() {
    int contador = 1;
    if (this->esq != NULL) {
        contador += this->esq->contaNos();
    }
    if (this->dir != NULL) {
        contador += this->dir->contaNos();
    }
    return contador;
}

void NoABB::somaContadorPorNivel(int nivelAlvo, int nivelAtual, float& soma, int& contador) {
    if (nivelAtual > nivelAlvo) return;
    if (nivelAtual == nivelAlvo) {
        soma += this->valor;
        contador++;
        return;
    }
    if (this->esq != NULL) {
        this->esq->somaContadorPorNivel(nivelAlvo, nivelAtual+1, soma, contador);
    }
    if (this->dir != NULL) {
        this->dir->somaContadorPorNivel(nivelAlvo, nivelAtual+1, soma, contador);
    }
}

void NoABB::calculaAltura() {
    int alturaEsq = -1;
    int alturaDir = -1;
    if (esq != NULL) {
        esq->calculaAltura();
        alturaEsq = esq->altura;
    }
    if (dir != NULL) {
        dir->calculaAltura();
        alturaDir = dir->altura;
    }
    this->altura = 1 + max(alturaEsq, alturaDir);
}


void NoABB::insere(int valor) {
    if(valor == this->getValor()) return;
    if(valor < this->getValor()) {
        if(this->getEsq() == NULL) {
            this->setEsq(new NoABB(valor));
        } else {
            this->getEsq()->insere(valor);
        }
    } else {
        if(this->getDir() == NULL) {
            this->setDir(new NoABB(valor));
        } else {
            this->getDir()->insere(valor);
        }
    }
}

NoABB* NoABB::busca(int valor) {
    if(valor == this->getValor()) return this;
    if(valor < this->getValor()) {
        return (this->getEsq() == NULL) ? NULL : this->getEsq()->busca(valor);
    } else {
        return (this->getDir() == NULL) ? NULL : this->getDir()->busca(valor);
    }
}

NoABB* NoABB::remove(NoABB* no, int valor) {
    if(no == NULL) return NULL;
    if(valor < no->getValor()) {
        no->setEsq(remove(no->getEsq(), valor));
    } else if(valor > no->getValor()) {
        no->setDir(remove(no->getDir(), valor));
    } else {
        if(no->getEsq() == NULL) {
            NoABB* aux = no->getDir();
            no->setDir(NULL);
            delete no;
            return aux;
        } else if(no->getDir() == NULL) {
            NoABB* aux = no->getEsq();
            no->setEsq(NULL);
            delete no;
            return aux;
        } else {
            NoABB* aux = no->getDir();
            while(aux->getEsq() != NULL) {
                aux = aux->getEsq();
            }
            no->setValor(aux->getValor());
            no->setDir(remove(no->getDir(), aux->getValor()));
        }
    }
    return no;
}

void NoABB::imprimeOrdemCrescente() {
    if(this->getEsq() != NULL) {
        this->getEsq()->imprimeOrdemCrescente();
    }
    cout << this->getValor() << ", ";
    if(this->getDir() != NULL) {
        this->getDir()->imprimeOrdemCrescente();
    }
}

void NoABB::imprimeVisualizacao(int n) {
    for (int i = 0; i < n; i++)
        cout << "--";
    cout << "(" << this->valor << ")" << endl;
    if (this->esq != NULL)
        this->esq->imprimeVisualizacao(n + 1);
    if (this->dir != NULL)
        this->dir->imprimeVisualizacao(n + 1);
}