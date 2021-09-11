/* 
Averiguar los lados de un triangulo
Autor:Todos
Compilado en dev c++
*/

#include <iostream>
using namespace std;

int main()
{ 
   float lado1,lado2,lado3;
   cout<<"ingrese el lado 1 ---> ";
   cin>> lado1;
   cout<<"ingrese el lado 2 ---> ";
   cin>> lado2;
   cout<<"ingrese el lado 3 ---> ";
   cin>> lado3;
   
   if ((lado1<(lado2+lado3)) or (lado2 < (lado1+lado3)) or (lado3 < (lado2+lado1)))
     {
       cout<< "\n SI FORMAN UN TRIANGULO ";
   
       if ((lado1 == lado2) and (lado2 == lado3) and (lado1 == lado3))
       {
	   cout<< "\n ES UN TRIANGULO EQUILATERO ";
       }
       else 
	   {
         if ((lado1 == lado2) or (lado2 == lado3) or (lado1 == lado3))
     
         {
       	cout<< "\n ES UN TRIANGULO ISOSCELES ";
         }
       	else 
		   {
       	 cout<<"ES UN TRIANGULO ESCALENO";
       } 
   }
}
else 
{cout<< "no es un triangulo";
}
       	 return 0;
}
