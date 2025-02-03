#include <iostream>
#include "Aluno.h"
using namespace std;

int main()
{
    Aluno aluno1;
    Aluno *aluno2 = new Aluno();

    aluno1.definirAluno();
    aluno1.calcularMedia();
    aluno1.imprimirAluno();


    aluno2->definirAluno();
    aluno2->imprimirAluno();


    delete aluno2;
    return 0;
}
