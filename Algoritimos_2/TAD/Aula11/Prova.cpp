#include "Prova.h"

Prova::Prova(int nq)
{
    n = nq;
    cout << "Criando prova" << endl;
    cout << "digite a quant de notas: ";
    cin>> n;
    *notaFinal = new double[n];
}

Prova::~Prova()
{
    // implemente o destrutor aqui
    cout << "Destruindo prova" << endl;
    dele [] notasQuestoes;
}

// exercicio 7
// implemente aqui
void Prova::leNotas()
{
    for(int i =0; i < n; i++)
    {
        cin >> notasQuestoes[i];
    }
}

void Prova::calculaNotaFinal()
{
     notafinal =0;
     double menorNota = notasQuestoes[0];
    for(int i =0; i< n; i++)
    {
        if(menorNota > notasQuestoes[i])
        {
        menorNota = notasQuestoes[i];
            notas = notas + notasQuestoes[i];
        }
    }
    notaFinal-= menorNota;

    return notaFinal;
}

double Prova::obtemNotaFinal(){
    calculaNotaFinal();
}


