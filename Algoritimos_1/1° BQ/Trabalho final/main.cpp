#include <iomanip>
#include <cstring>

#include <iostream>
using namespace std;
#define M 100

// função que lê as palavras feita pelo Issac Kapela
void pega_palavras(char palavras[][100], int numPalavras){
    for (int i = 0; i < numPalavras; i++){
        cin.getline(palavras[i],100);
    }
}
// função que lê a matriz feita pelo Issac Kapela
void pega_matriz(char matrizLetras[M][M], int colunas,int linhas){
    for (int xmatriz = 0; xmatriz < colunas; xmatriz++){
        for (int ymatriz = 0; ymatriz < linhas; ymatriz++){
                cin>>matrizLetras[xmatriz][ymatriz];
        }
    }
}
// função que converte palavras para minusculas feita pelo Ian Felix

void sanitiza_palavra(char palavras[][100], int numPalavras){
    for (int i = 0; i < numPalavras; i++){
        int tamanho = strlen(palavras[i]);
        for (int y = 0; y < tamanho ; y++){
            if (palavras[i][y] >='A' && palavras[i][y]<='Z' ){
                palavras[i][y]+=32;
            }
        }
    }
}
// função que converte matriz para minusculas feita pelo Ian Felix
void sanitiza_matriz(char matrizLetras[M][M], int colunas,int linhas){
    for (int x = 0; x < colunas; x++){
        for (int y = 0; y < linhas; y++){   
            if (matrizLetras[x][y] >='A' && matrizLetras[x][y]<='Z' ){
                matrizLetras[x][y]+=32;
            }
        }
    }
}
// função que compara duas palavras feita pelo Ian Felix
bool comparaPalavras(char p1[], char p2[], int tamanho){
    bool igual = true;
    for (int i = 0; i < tamanho; i++){
        if (p1[i] != p2[i]) {
            igual = false;
        }
    }
    return igual;
}

// impressao  das palavras pelo Ian Felix

void imprimeNotFound(char palavra[]){
    cout << "A palavra “";
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++){
        cout<<palavra[i];
    }
    cout << "” não foi localizada."<<endl;
}
void imprimeLocal(int i, char palavra[], int x, int y){
    int tamanho = strlen(palavra);
    cout << "A palavra “";
    for (int i = 0; i < tamanho; i++){
        cout<<palavra[i];
    }
    cout<<"” foi localizada ";
    switch ( i)
           {
           case  0 ... 1:
               cout<<"horizontalmente";
               break;
           case  2 ... 3:
               cout<<"verticalmente";
               break;
           case  4 ... 7:
               cout<<"diagonalmente";
               break;
           
           default:
               break;
           }
    cout<< " a partir de posição"<<endl<< "("<<x<<","<<y<<")"<<endl;
}
// função que verifica se a palavra está na matriz feita por MIguel Dias
bool sonardePalavra(char palavra[],int posy,int posx,char matrizLetras[M][M]){
    int tamanho = strlen(palavra);
    char palavrasFormadas[8][100];

    for (int i = 0; i <tamanho; i++){
        
        char horizontalCima = matrizLetras[posy][posx+i];
        char horizontalBaixo = matrizLetras[posy][posx-i];
        char verticalCima = matrizLetras[posy+i][posx];
        char verticalBaixo = matrizLetras[posy-i][posx];
        char diagonalA = matrizLetras[posy+i][posx+i];
        char diagonalB = matrizLetras[posy-i][posx-i];
        char diagonalC = matrizLetras[posy+i][posx-i];
        char diagonalD = matrizLetras[posy-i][posx+i];

        palavrasFormadas[0][i] = horizontalCima;
        palavrasFormadas[1][i] = horizontalBaixo;
        palavrasFormadas[2][i] = verticalBaixo;
        palavrasFormadas[3][i] = verticalCima;
        palavrasFormadas[4][i] = diagonalA;
        palavrasFormadas[5][i] = diagonalB;
        palavrasFormadas[6][i] = diagonalC;
        palavrasFormadas[7][i] = diagonalD;
        
    }
    
    for (int i = 0; i < 8; i++){
        bool encontrou = comparaPalavras(palavra,palavrasFormadas[i],tamanho);
        if (encontrou){
           imprimeLocal(i,palavra,posy,posx);
            return true;
        }
    }
    return false;
}
    
// função que busca as primeiras letras feita por Miguel Dias
void buscar_palavra(char palavra[],char matrizLetras[M][M], int colunas,int linhas){
    
    char pLetra = palavra[0];
    bool encontrouNoTodo = false;
    for (int x = 0; x < colunas; x++){
        for (int y = 0; y < linhas; y++){   
            if (matrizLetras[x][y] == pLetra ){
                bool encontrouNaPos = sonardePalavra(palavra,x,y,matrizLetras);
                if (encontrouNaPos == true){
                    encontrouNoTodo = true;
                }
            }
        }
    }
    if (encontrouNoTodo == false){
        imprimeNotFound(palavra);
    }
    
}
// ciclo do aplicativo do feito por Miguel Dias
int main() {
    

 
    int numPalavras; cin>>numPalavras;
    int linhas; cin>>linhas;
    int colunas; cin>>colunas;
    char matrizLetras[ M ][ M];
    char palavras[numPalavras][100];
    cin.ignore();

    pega_palavras(palavras,numPalavras);
    pega_matriz(matrizLetras,colunas,linhas);
    sanitiza_palavra(palavras,numPalavras);
    sanitiza_matriz(matrizLetras,colunas,linhas);
    for (int i = 0; i < numPalavras; i++)
    {
        buscar_palavra(palavras[i],matrizLetras,colunas,linhas);
    }
    
    return 0;
}


