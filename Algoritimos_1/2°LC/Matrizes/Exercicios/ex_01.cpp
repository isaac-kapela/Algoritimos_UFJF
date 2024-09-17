#include <iomanip>
#include <iostream>
using namespace std;
#include <iostream>

int main()
{
    int M[5][5];

    for(int i =0; i < 5; i++)
    {
      for(int j = 0; j < 5; j++)
        {
            if(i == j)
            {
                cin>>M[i][j];
            }
            else
            {
                M[i][j] = 0;
            }
        }

    }

    for(int i =0; i < 5; i++)
    {
      for(int j = 0; j < 5; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}