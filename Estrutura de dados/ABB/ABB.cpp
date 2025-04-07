#include <iostream>
#include "ABB.h"
#include "NoABB.h"
#include "NoLSE.h"

using namespace std;

ABB::ABB()
{
	this->raiz = NULL;
}

ABB::~ABB()
{
	delete this->raiz;
}

bool ABB::vazia()
{
	return this->raiz == NULL;
}

void ABB::insere(int valor)
{
	if (this->vazia())
		this->raiz = new NoABB(valor);
	else
		this->raiz->insere(valor);
}

NoABB* ABB::busca(int valor)
{
	if (this->vazia())
		return NULL;
	return this->raiz->busca(valor);
}

void ABB::remove(int valor)
{
	if (!this->vazia())
		this->raiz = this->raiz->remove(this->raiz, valor);
}

void ABB::imprimeEmLargura()
{
	if (!this->vazia())
	{
		NoLSE* lista = new NoLSE(this->raiz);
		for (NoLSE* p = lista; p != NULL; p = p->getProx())
		{
			cout << p->getNo()->getValor() << ", ";
			p->insere(p->getNo()->getEsq());
			p->insere(p->getNo()->getDir());
		}
		delete lista;
	}
	cout << "\b\b  " << endl;
}

void ABB::imprimeOrdemCrescente()
{
	if (!this->vazia())
		this->raiz->imprimeOrdemCrescente();
	cout << "\b\b  " << endl;
}

void ABB::imprimeVisualizacao()
{
	if (!this->vazia())
		this->raiz->imprimeVisualizacao(0);
}

void ABB::destroiArvore()
{
	delete this->raiz;
	this->raiz = NULL;
}

int ABB::soma()
{
    if(this->vazia()) {
        return 0;
    }
    return this->raiz->soma();
}

float ABB::media()
{
    if(this->vazia())
        return 0.0;
    else
        return (float)this->raiz->soma()/this->raiz->contaNos();
}

bool ABB::ehCheia()
{
    if(this->vazia()) {
        return true;  // Uma árvore vazia é considerada cheia
    }
    return this->raiz->ehCheia();
}

bool ABB::ehCompleta()
{
    if (this->vazia()) return true;
    int n = this->raiz->contaNos();
    return this->raiz->ehCompleta(0, n);
}

bool ABB::ehEstritamenteBinaria()
{
    if (this->vazia()) {
        return true;  // Uma arvore vazia é considerada estritamente binária
    }
    return this->raiz->estritamenteBinaria();          
    
}

void ABB::imprimeIntervalo(int x, int y)
{
    if (this->vazia()) {
        return;
    }
    this->raiz->imprimeIntervalo(x, y);
    cout<<endl;
}

int ABB::maioresQue(int valor)
{
    if (this->vazia()) {
        return 0;
    }
    return this->raiz->maioresQue(valor);
}

float ABB::mediaNivel(int nivel)
{
    if (this->vazia() || nivel < 0)
        return -1.0;

    float soma = 0;
    int contador = 0;
    this->raiz->somaContadorPorNivel(nivel, 0, soma, contador);

    if(contador == 0)
        return 0.0;
    else
        return soma / contador;
}

void ABB::alturaNos()
{
    if (vazia()) {
        cout << "A árvore está vazia." << endl;
        return;
    }

    raiz->calculaAltura();

    NoLSE* lista = new NoLSE(raiz);
    NoLSE* atual = lista;

    while (atual != NULL) {
        NoABB* noAtual = atual->getNo();
        cout << "Nó " << noAtual->getValor() << ": altura " << noAtual->altura << endl;

        if (noAtual->getEsq() != NULL) {
            atual->insere(noAtual->getEsq());
        }
        if (noAtual->getDir() != NULL) {
            atual->insere(noAtual->getDir());
        }

        atual = atual->getProx();
    }

    delete lista;
}
