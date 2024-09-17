    
        #include <iostream>
        # include <iomanip>
        using namespace std;

        int main ( ){

            int a;
            cout << "Digite o valor solicitado: ";
            cin >> a;

            if((a <= 50 || a >= 100) &&   a% 3 == 0) {
                cout <<  "valor adequado de a";
            }

            else {
                cout << "Valor inadequado de a ";

                 }

           


            return 0;
        }