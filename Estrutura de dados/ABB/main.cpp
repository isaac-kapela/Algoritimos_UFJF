#include <iostream>
#include <string>
#include "ABB.h"

using namespace std;

int lerNumero()
{
	string s;
	getline(cin, s);
/*
 *	O ideal seria usar a função stoi, mas meu compilador desatualizado não aceita
 *
	try
	{
		return stoi(s);
	}
	catch (const invalid_argument& e)
	{
		return 0;
	}
	catch (const out_of_range& e)
	{
		return 0;
	}
 */
	int x = 0;
	int n = s.length();
	if (n == 0 || n > 6) // tamanho máximo arbitrário
		return -100000; // a flag precisa estar fora do escopo de números aceitáveis
	for (int i = ((s[0] == '-') ? 1 : 0); i < n; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			x = x * 10 + s[i] - '0';
		else
			return -100000;
	}
	if (s[0] == '-')
		x *= -1;
	return x;
}

int filtrarEntrada()
{
	int n = lerNumero();
	while (n == -100000)
	{
		cout << "Numero invalido. Tente novamente: ";
		n = lerNumero();
	}
	return n;
}

int main()
{
	int a[] = {20, 13, 30, 11, 15, 25, 33, 10, 12, 14, 18};
	ABB* arv = new ABB();
	for (int i = 0; i < 11; i++)
		arv->insere(a[i]);
	int op = 0;
	char str[10];
	while (true)
	{
		cout << "\033[2J\033[1;1H";
		arv->imprimeEmLargura();
		cout << endl << "Selecione uma operacao:" << endl;
		cout << " 1: Inserir no" << endl;
		cout << " 2: Buscar valor" << endl;
		cout << " 3: Remover no" << endl;
		cout << " 4: Imprimir visualizacao" << endl;
		cout << " 5: Imprimir ordem crescente" << endl;
		cout << " 6: Destruir arvore" << endl;
		cout << " 7: Calcular a soma dos nós" << endl;
		cout << " 8: Calcular a média dos nós" << endl;
		cout << " 9: Verificar se a árvore é cheia" << endl;
		cout << " 10: Verificar se a árvore é completa" << endl;
		cout << " 11: Verificar se a árvore é estritamente binária" << endl;
		cout << " 12: Imprimir intervalo de x até y" << endl;
		cout << " 13: Verificar quantos nós são maiores que um valor x" << endl;
		cout << " 14: Calcular a média por nível" << endl;
		cout << " 15: Altura dos nós" << endl;
		cout << " 0: Encerrar o programa" << endl;
		cout << endl << "Digite o numero correspondente: ";
		op = lerNumero();
		while (op < 0 || op > 15)
		{
			cout << "Operacao invalida. Tente novamente: ";
			op = lerNumero();
		}
		switch (op)
		{
			case 1:
				cout << "Digite o valor do no (numero inteiro): ";
				arv->insere(filtrarEntrada());
				cout << "Insercao realizada com sucesso. Pressione ENTER para continuar.";
				lerNumero();
				break;

			case 2:
				cout << "Digite o valor a ser buscado (numero inteiro): ";
				op = filtrarEntrada();
				cout << "O numero " << op << ((arv->busca(op) == NULL) ? " NAO " : " ") << "existe na arvore. Pressione ENTER para continuar.";
				lerNumero();
				break;

			case 3:
				cout << "Digite o valor do no a ser removido (numero inteiro): ";
				op = filtrarEntrada();
				if (arv->busca(op) == NULL)
					cout << "O numero " << op << " NAO existe na arvore. Pressione ENTER para continuar.";
				else
				{
					arv->remove(op);
					cout << "No removido com sucesso. Pressione ENTER para continuar.";
				}
				lerNumero();
				break;

			case 4:
				cout << endl;
				arv->imprimeVisualizacao();
				cout << endl << "Pressione ENTER para continuar.";
				lerNumero();
				break;

			case 5:
				cout << endl;
				arv->imprimeOrdemCrescente();
				cout << endl << "Pressione ENTER para continuar.";
				lerNumero();
				break;

			case 6:
				cout << endl;
				arv->destroiArvore();
				cout << "Arvore destruida com sucesso. Pressione ENTER para continuar.";
				lerNumero();
				break;

            case 7:
                cout << endl;
                cout << "A soma dos nós da árvore é: " << arv->soma() << endl;
                cout << "Pressione ENTER para continuar.";
                lerNumero();
                break;

            case 8:
                cout << endl;
                cout << "A média dos nós da árvore é: " << arv->media() << endl;
                cout << "Pressione ENTER para continuar.";
                lerNumero();
                break;

            case 9:
                cout << endl;
                if(arv->ehCheia())
                    cout << "A árvore é cheia!" << endl;
                else
                    cout << "A árvore NÃO é cheia!" << endl;
                cout << "Pressione ENTER para continuar.";
                lerNumero();
                break;

            case 10:
                cout << endl;
                if(arv->ehCompleta())
                    cout << "A árvore é completa!" << endl;
                else
                    cout << "A árvore NÃO é completa!" << endl;
                cout << "Pressione ENTER para continuar.";
                lerNumero();
                break;

            case 11:
                cout << endl;
                if(arv->ehEstritamenteBinaria())
                    cout << "A árvore é estritamente binária!" << endl;
                else
                    cout << "A árvore NÃO é estritamente binária!" << endl;
                cout << "Pressione ENTER para continuar.";
                lerNumero();
                break;

            case 12:
                cout << endl;
                int x,y;
                cout << "Digite o primeiro valor do intervalo: ";
                x = lerNumero();
                cout << "Digite o segundo valor do intervalo: ";
                y = lerNumero();
                arv->imprimeIntervalo(x,y);
                cout << "Pressione ENTER para continuar.";
				lerNumero();
				break;

            case 13:
                cout << endl;
                int valor;
                cout << "Digite um valor para efetuar a operação: "; valor = lerNumero();
                if(arv->maioresQue(valor) != 0)
                    cout << "Existem " << arv->maioresQue(valor) << " nós maiores que "
                    << valor << " nessa árvore." << endl;
                cout << endl << "Pressione ENTER para continuar.";
				lerNumero();
				break;

            case 14:
                cout << endl;
                int nivel;
                cout << "Digite o nível que você deseja obter a média: "; nivel = lerNumero();
                cout << "A média do nível " << nivel << " é " << arv->mediaNivel(nivel);
                cout << endl << "Pressione ENTER para continuar.";
				lerNumero();
				break;

            case 15:
                cout << endl;
                arv->alturaNos();
                cout << endl << "Pressione ENTER para continuar.";
				lerNumero();
				break;

			default:
				break;
		}
		if (op == 0)
			break;
	}
	return 0;
}
