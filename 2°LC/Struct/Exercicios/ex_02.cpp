#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Ponto{
  int x;
  int y;
};

Ponto PontoMaisProximo(Ponto p1, Ponto p2){
  float d1 = sqrt(pow(p1.x, 2) + pow(p1.y, 2));
  float d2 = sqrt(pow(p2.x, 2) + pow(p2.y, 2));
  return (d1 < d2) ? p1 : p2;
}

int main()
{
    Ponto pontos[4];
    for(int i = 0; i < 4; i++) {
        cin >> pontos[i].x >> pontos[i].y;
    }

    Ponto maisProximo = pontos[0];
    for(int i = 1; i < 4; i++) {
        maisProximo = PontoMaisProximo(maisProximo, pontos[i]);
    }

    cout << "Mais Próximo: (" << maisProximo.x << "," << maisProximo.y << ")" << endl;

    return 0;
}