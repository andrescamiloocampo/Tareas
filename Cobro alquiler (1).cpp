/* Desarrollado por: Carlos Andres Calderon Vidal
                     Andres Camilo Ocampo Ramirez 
Compilado en dev c++ 5.11
2021
*/

#include<iostream>

using namespace std;

int main (){

float montofijo = 1300000, monto = 0;
int kilometros;

cout<<" kilometros recorridos: ";
cin>> kilometros ;

if (kilometros > 0  and  kilometros <= 300)
     
	{
	cout<< "valor a pagar" <<montofijo;
	}

     
     else   {
	  
	 if (kilometros > 300 and kilometros <=1000)
           {
			   monto = montofijo + (kilometros - 300)* 50000;
         }
            else {
			monto = montofijo + (kilometros - 300)*100000;
		}
            
    cout << "total a cancelar"<< monto *1.19;
} 
return 0;
}
    
        
