#ifndef ABB_H
#define ABB_H

#include "NoABB.h"

class ABB
{
	private:

		NoABB* raiz;

	public:

		ABB();
		~ABB();

		int soma(); // 7
		float media(); // 8
		bool ehCheia(); // 9
		bool ehCompleta(); // 10
		bool ehEstritamenteBinaria(); // 11
		void imprimeIntervalo(int x, int y); // 12
		int maioresQue(int valor); // 13
		float mediaNivel(int nivel); // 14
		void alturaNos(); // 15

		bool vazia();
		void insere(int valor);
		NoABB* busca(int valor);
		void remove(int valor);
		void imprimeEmLargura();
		void imprimeOrdemCrescente();
		void imprimeVisualizacao();
		void destroiArvore();
};

#endif
