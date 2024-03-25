#include <iomanip>
#include <iostream>
using namespace std;

bool funcao(int mat[][3], int l, int c)
{
    bool quadrada = true;
    bool aux = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (l == c)
            {
             quadrada = true;
            }
            else{
                 quadrada = false;
            }
            bool aux = true;
            if(mat[0][j]== mat[l-1][j]){
             aux = true;
            }
            else{
                aux = false;
            }
        }
    }
   if(aux == true) {
    cout << "são iguais" << " ";
   }
   if(quadrada == true){
    return true;
   }
   else{
    return false;
   }
}

int main(){
   int l =3 , c = 3,  matriz [3] [3] = {{1,3, 2}, {1,3,1},
   {1,3,1}} ;

  cout << funcao(matriz, l , c);

    return 0;
}