#include <iostream>
#include <string>
using namespace std;
#define candidatos 5
#define votos 25
int main(){
int contador [candidatos], cand;
for(int i = 0; i < candidatos; i++){
    contador[i] = 0;

}

for(int i = 0; i < votos; i++){
    cout << "entre com votos"<< i+1 << ". voto";
    cin >> cand;
    contador[cand]++;
}

for(int i = 0; i < candidatos; i++){
    cout << "candidato" << i+1 << "teve" << contador[i] << "votos" << endl;
}
    return 0;
}