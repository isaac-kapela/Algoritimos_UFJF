#include <iostream>
#include <iomanip>
using namespace std;

 struct est_Data
 {
        int dia;
        int mes;
        int ano;
 };

 int data(est_Data data1, est_Data data2, int diferenca = 0)
 {
     
     cin >> data1.dia >> data1.mes >>  data1.ano >> data2.dia >> data2.mes >>  data2.ano;
     if(data1.dia < data2.dia && data1.mes < data2.mes && data1.ano < data2.ano){
         diferenca++;
     }
     else if(data2.dia < data1.dia && data2.mes < data1.mes && data2.ano < data1.ano){
         diferenca++;
     }
     return diferenca;
 }

 int mmain()
 {
     est_Data data1, data2;
     int diferenca = 0;
     data(data1, data2 , diferenca);
     cout << diferenca << endl;
     return 0;
 }
  