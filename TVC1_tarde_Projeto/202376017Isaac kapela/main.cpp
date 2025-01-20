#include <iostream>

/// NOME: Isaac dizolele kapela joão
/// MATRÍCULA: 202376017

using namespace std;

// ----------------------------------------------------------------------------
//Q1
void q1()
{
int vet[6] ={10,20,30,40,50,60}
int *p = &vet;
*p = &vet[4];
*p= &vet(4-1); //&vet[4-1]
int diferenca = p - &vet;
cout << diferenca << endl;
*p = &vet[5]
*p = &vet;
*p = &vet[1];
cout << *p <<;
cout<< *(p+2) <<;


}
//-Q1
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q2
int* pares(int vet[], int n, int *m, int *t)
{
 for(int i =0; i < n; i++){
 *t=0
        if(vet[i] % 2 == 0){
            *t++;
            }

        else{
            *m = -1;
        }
 }

 for(int i =0; i < n; i++){
        if(vet[i]% 2 == 0){
         *m = vet[0];
                if(*m < vet[i]){
                *m = vet[i];
                }
        }
 }
    int *novoVet = new int [*t];
    for(int i =0; i < n; i++){
    if(vet[i] % 2 ==0){
    }
        novoVet[i] = vet[i];
    }
    else{
        return NULL;
    }

    delete novoVet [];

    return *novoVet;
}
int main(){
    int


return 0;
}

//-Q2
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q3


void imprimeBinario(int n)
{

if(n == 0){
    return 0 ;
}

else{
    int r = n/2;
    cout << r << - <<;
    return imprimeBinario(r) ///imprimeBinario(n/2);
}



}
//-Q3
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q4
bool ehOrdenado(int vet[], int n)
{
    if(vet[0] > vet[n]){
        return false;
    }

        else{
            if(vet[n]  > vet[n-1]){
                ehOrdenado(vet, n-1);
                return true;
            }
        }

}
//-Q4
// ----------------------------------------------------------------------------


int main()
{
    // TESTES PARA A QUESTAO 1 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 1" << endl;
    cout << "Resultado esperado: 3 10 30" << endl;
    cout << "Resultado obtido:   ";
    q1();
    cout << endl << endl;
    // ------------------------------------------------------------------------

    // TESTES PARA A QUESTAO 2 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 2" << endl;
    int *r, t;
    int m = 0;
    cout << "Resultado esperado: m = 50 / vetor = 10 50 12 42 14" << endl;
    cout << "Resultado obtido:   ";
    int v21[] = {13, 10, 5, 1, 50, 33, 12, 7, 42, 14};
    r = pares(v21, 10, &m, &t);
    cout << "m = " << m << " / vetor = ";
    if(r)
    {
        for(int i = 0; i < t; i++)
            cout << r[i] << " ";
        delete [] r;
    }
    cout << endl;

    cout << "Resultado esperado: m = 12 / vetor = 12" << endl;
    cout << "Resultado obtido:   ";
    int v22[] = {3, 1, 25, 12, 19, 21};
    r = pares(v22, 6, &m, &t);
    cout << "m = " << m << " / vetor = ";
    if(r)
    {
        for(int i = 0; i < t; i++)
            cout << r[i] << " ";
        delete [] r;
    }
    cout << endl;

    cout << "Resultado esperado: m = -1 / vetor = " << endl;
    cout << "Resultado obtido:   ";
    int v23[] = {1, 3, 5, 7};
    r = pares(v23, 4, &m, &t);
    cout << "m = " << m << " / vetor = ";
    if(r)
    {
        for(int i = 0; i < t; i++)
            cout << r[i] << " ";
        delete [] r;
    }
    cout << endl;
    cout << endl << endl;
    // ------------------------------------------------------------------------

    // TESTES PARA A QUESTAO 3 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 3" << endl;
    cout << "Resultado esperado: 0    -- Resultado obtido: "; imprimeBinario(0); cout << endl;
    cout << "Resultado esperado: 1    -- Resultado obtido: "; imprimeBinario(1); cout << endl;
    cout << "Resultado esperado: 10   -- Resultado obtido: "; imprimeBinario(2); cout << endl;
    cout << "Resultado esperado: 111  -- Resultado obtido: "; imprimeBinario(7); cout << endl;
    cout << "Resultado esperado: 1000 -- Resultado obtido: "; imprimeBinario(16); cout << endl;
    cout << endl << endl;
    // ------------------------------------------------------------------------

    // TESTES PARA A QUESTAO 4 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 4" << endl;
    int v41[] = {12, 1, 3, 4, 1, 2};
    cout << "Resultado esperado: 0 -- Resultado obtido: " << ehOrdenado(v41, 6) << endl;

    int v42[] = {-1, 5, 9, 0, 8, 12, 18};
    cout << "Resultado esperado: 0 -- Resultado obtido: " << ehOrdenado(v42, 7) << endl;

    int v43[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Resultado esperado: 1 -- Resultado obtido: " << ehOrdenado(v43, 11) << endl;
    cout << endl << endl;
    // ------------------------------------------------------------------------

    return 0;
}
