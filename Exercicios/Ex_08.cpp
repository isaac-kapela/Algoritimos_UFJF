
        #include <iostream>
        # include <iomanip>
    
     using namespace std;
     float calculo(){
         
         int numerofun;
         float horasTrabalho;
         
         
         float salario;
         
          cin >> numerofun;
       

       cin >> salario;
      cin >> horasTrabalho;
       cout << "NUMBER = "<< numerofun << "\n";
       
         
         return salario*horasTrabalho;
         
     }
     
     
     int main (){
         
         float  salarioHora;
         
      cout << fixed << setprecision(2);
                 salarioHora = calculo();
  cout <<"SALARY = U$ " << salarioHora;
                 
           return 0;

         
         
     }