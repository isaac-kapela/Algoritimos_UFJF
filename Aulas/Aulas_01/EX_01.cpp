    
        #include <iostream>
        # include <iomanip>
    
     using namespace std;
     
     float Media(float valor1, float valor2, float valor3){
       float  media =   valor1 + valor2 + valor3 ;
        media = media / 3;
         return media;
        
         
     }
    
    int main()
    {
        
        float a,b,c;
        
     //   cout<<"Digite os valores a serem calculados: ";
        
        cin >> a >> b >>c;
        
        cout << fixed << setprecision(2);
        
        cout << "Média: " << Media(a,b,c);
    
        return 0;
    }
