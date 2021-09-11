/*Objetivo: Primos gemelos y primos felices
 Autor:Todos
 Fecha: 24/07/2021
*/

#include<iostream>
#define TAM_MAX 20

using namespace std;

bool esPrimo(int numero);
void primosGemelos();
int moduloDigitos(int numero);
void primoFeliz(void);
void numeroOndulado();

int main()
{
	primosGemelos();
	primoFeliz();
	numeroOndulado();
	
	return 0;
}

bool esPrimo(int numero)
{
	int i;
	
	if(numero==0 or numero==1)
	{
		return false;
	}
	else
	{
		for(i=2;i<numero;i++)
		{
			if(numero%i==0)
			{
				return false;
			}
		
		}
	}
    return true;	
}

void primosGemelos()
{
	int i,n;
	
	cout<<"\n Ingrese numero:";
	cin>>n;
	
	while(n<2 or n>35000)
	{
		cout<<"Ingrese numero valido (2,35000):";
		cin>>n;
	}
	
	for(i=2;i<n;i++)
	{
		if(esPrimo(i)==true and esPrimo(i+2)==true)
		{
			cout<<"\n"<<i<<" "<<i+2<<" "<<"son gemelos"<<endl;
		}
	}
}

int moduloDigitos(int numero)
{
	int d1=0,d2=0,d3=0,d4=0,sumaCuadrados,i;
	int cociente;
	
	d1=numero%10;
	cociente=numero/10;
	d2=cociente%10;
	cociente=cociente/10;
	d3=cociente%10;
	cociente=cociente/10;
	d4=cociente%10;
	
	sumaCuadrados=d1*d1 + d2*d2 + d3*d3 + d4*d4;
	
	return sumaCuadrados;	
}

void primoFeliz(void)
{
	int numero,i=0,suma;
	cout<<"\nIngrese numero:";
	cin>>numero;
	
	while(numero<=9 or numero>=10000)
	{
		cout<<"Ingrese un numero valido (10, 9999):";
		cin>>numero;
	}
	suma=numero;
	
	if(esPrimo(numero)==true)
	{
		do
		{
		 suma=moduloDigitos(suma);
		 cout<<"\nsuma:"<<suma;
		 i++;	
		}while(suma>=10 and i<100);
		
		if(suma==1)
		{
			cout<<numero<<" \nEs un numero feliz";
		}
		else
		{
			cout<<"No es un numero feliz";
		}
	}
	else
	{
		cout<<"No es un numero primo";
	}
}

//si un numero de 4 cifras es un numero ondulado

void numeroOndulado()
{
	int d1=0,d2=0,d3=0,d4=0,i;
	int cociente,numero;
		
	cout<<"Ingrese un numero:";
	cin>>numero;
	
	d1=numero%10;
	cociente=numero/10;
	d2=cociente%10;
	cociente=cociente/10;
	d3=cociente%10;
	cociente=cociente/10;
	d4=cociente%10;
	
	while(numero<=9 or numero>=10000)
	{
		cout<<"Ingrese un numero valido:";
		cin>>numero;
	}
	
	
	if(numero>999 and numero<10000)
	{
	if((d1=d3) and (d2=d4))
	{
		cout<<"Es un numero ondulado";
	}
	else
	{
		if((d1=d2) or (d3=d4))
		{
			cout<<"No es ondulado";
		}
	}
	
    }
    if(numero>=100 and numero<=999)
    {
    	if(d1=d3)
    	{
    		cout<<"Es un numero ondulado";
		}
			
		else
	{
		if((d1=d2) or (d2=d3))
		{
			cout<<"No es ondulado";
		}
	}
	
	}
	if(numero>=10 and numero<100)
	{
		if(d1!=d2)
		{
			cout<<"Es un numero ondulado";
		}
		
		else
		{
	       cout<<"Es un numero ondulado";
		}
	}
	
}



