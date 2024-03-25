# include <iostream>

using namespace std;

bool verificaPar(int num1){
    return (num1%2 == 0);
}

int main(){
    int valor1,valor, freq;
    int media =5;

    if(valor1 > media || freq > 60){
        cout << "aprovado";
    }else{
        cout << "reprovado";
    }


    //não tem nada haver com o codigo acima

    if(verificaPar(valor1)){
        cout << valor1 << " eh par";
    }
    else
        cout << valor1 << " eh impar";
}