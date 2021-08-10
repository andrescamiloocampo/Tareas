#include <iostream>
#include <stdio.h>

using namespace std;

void menu();

int descuento1(float deuda);
int descuento2(float deuda);
int descuento3(float deuda);
int descuento4(float deuda);

int main()
{
	int estrato,opcion;
	float deuda;
	
	cout<<"Ingrese una de las siguientes opciones:"<<endl;
	cout<<"1. Consultar descuento de su deuda"<<endl;
	cout<<"0. Salir"<<endl;
	cout<<"----->";cin>>opcion;
	
	while(opcion<0 or opcion>1)
	{
		cout<<"Ingrese una opcion valida:";
		cin>>opcion;
	}
	
	switch(opcion)
	{
	case 1:	
	cout<<"Ingrese su estrato:";
	cin>>estrato;
	
	if(estrato>3)
	{
		cout<<"\nSu estrato no aplica a descuentos"<<endl;
		cout<<"GRACIAS POR UTILIZAR EL PROGRAMA";
	}
	else
	{
		cout<<"\nIngrese la cantidad correspondiente a su deuda:";
		cin>>deuda;
	}
	
	if(deuda>=600000 and deuda<1500000)
	{
		int n;
		n=descuento1(deuda);
	}
	
	if(deuda>=1500000 and deuda<=3000000)
	{
		int m;
		m=descuento2(deuda);
	}
	
	if(deuda>=3000000 and deuda<=8000000)
	{
		int o;
		o=descuento3(deuda);
	}
	
	if(deuda>8000000)
	{
		int p;
		p=descuento4(deuda);
	}
	
	else
	{
		if(deuda<600000)
		{  
		   system("color 4");
			cout<<"\nNo hay descuentos para su deuda";
		}
	}
	break;
	
	case 0: cout<<"Gracias por utilizar el programa";
	break;
}
	return 0;
}

int descuento1(float deuda)
{
 system("color 6");
 float desc1,ni;
 desc1=0.2*deuda;
 ni=deuda-desc1;
 cout<<"\nPara su deuda de"<<" "<<deuda<<" "<<"hay un descuento del 20%"<<endl;
 cout<<"Su deuda queda en"<<" "<<ni;
}

//=======================================================================================

int descuento2(float deuda)
{
	system("color 6");
 float desc2,nj;
 desc2=0.3*deuda;
 nj=deuda-desc2;
 printf("\nPara su deuda de %f hay un descuento del 30 por ciento",deuda);
 printf("\nSu deuda queda en %f",nj);
}

//==========================================================================================

int descuento3(float deuda)
{
	system("color 6");
 float desc3,nk;
 desc3=0.4*deuda;
 nk=deuda-desc3;
 printf("\nPara su deuda de %f hay un descuento del 40 por ciento",deuda);
 printf("\nSu deuda queda en %f",nk);
}

//==========================================================================================

int descuento4(float deuda)
{
	system("color 6");
 float desc4,nl;
 desc4=0.5*deuda;
 nl=deuda-desc4;
 printf("\nPara su deuda de %f hay un descuento del 50 por ciento",deuda);
 printf("\nSu deuda queda en %f",nl);
}
