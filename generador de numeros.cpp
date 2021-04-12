/*Generador de numeros
Desarrollado por: Andres Camilo Ocampo Ramirez 
                  Carlos Andres Calderon Vidal
Compilado en dev C++ 5.11
2021
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
int numero;
int c1,c2,c3,c4,c5,c6;
int d1,d2,d3;

cout<< "ingrese numero de tres cifras ";
cin>> numero;
d3= numero % 10;
numero= numero/10;
d2=numero%10;
numero= numero/10;
d1= numero % 10;


c1= (d3*pow(10,2) + d2*10 + d1);
c2= (d1*pow(10,2) + d3*10 + d2);
c3= (d2*pow(10,2) + d1*10 + d3);
c4= (d2*pow(10,2) + d3*10 + d1);
c5= (d3*pow(10,2) + d1*10 + d2);
c6= (d1*pow(10,2) + d2*10 + d3);

if ((d3>d2) and (d3>d1) and (d2>d1))
{
	cout<< "el mayor numero posible es "<<c1;
	
}
else
{
	if ((d1>d2) and (d1>d3) and (d3>d2))
	{
		cout<<"el mayor numero posible es "<<c2;
	}

else 
{
	if ((d2>d1) and (d2>d3) and (d1>d3))
	{
		cout<<"el mayor numero posible es "<<c3;
	}

else
{
	if ((d2>d3) and (d2>d1) and (d3>d1))
	{
		cout<<"el mayor numero posible es "<<c4;
	}

else 
{
	if ((d3>d1) and (d3>d2) and (d1>d2))
	{
		cout<<"el mayor numero posible es "<<c5;
	}

else 
{
	if ((d3>d2) and (d3>d1) and (d2>d1))
	{
		cout<<"el mayor numero posible es "<<c6;
	}
}

}
}
}
}
return 0;
}
