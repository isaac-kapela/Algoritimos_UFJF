#include <iostream>

using namespace std;

int main()
{
    //int mat[3][3];
   // int *vet;
  //  vet = new int [3];
  int n = 10;

    int **mat;
    mat = new int*[n];
    for(int i =0; i < n; i++){
        *(mat+i) = new int [n];
    }
    for(int i =0; i < n; i++){
        for(int j =0;  j<n; j++){
            *(*(mat+i)+j)=j;
        }
    }

    for(int i =0; i < n;i++){
        for(int j =0; j < n; j++){
            cout << *(*(mat+i)+j) << " ";
        }
        cout << endl;

    }
    for(int i =0; i <n; i++){
            delete [] *(mat+i) ;
        }
    delete [] mat;

    return 0;
}
