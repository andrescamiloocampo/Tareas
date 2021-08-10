/*
Notacion polar a notacion rectangular y viceversa
Autores: Andres Camilo Ocampo Ramirez
         Eder Mauricio Monsalve Bustamante
         Miguel Angel Metaute Chiquito

fuentes:https://www.youtube.com/watch?v=5ghAM_1nZhw&t=359s&ab_channel=math2me
        https://www.youtube.com/watch?v=NhwqQJPRRWM&t=86s&ab_channel=Salvandoelsemestre
        https://www.youtube.com/watch?v=G0gfLs4Fbnc&t=174s&ab_channel=ProyectosJC
        
Fecha: 07/08/2021 

Numero de ejercicio: Grupo 1 ejercicio 3
*/

#include <iostream>
#include <math.h>
#include <stdio.h>
#define PI 3.1415926536


using namespace std;

void menu();
int polarToRectangular(float a,float r);
int rectangularToPolar(float r, float i);

int main()
{	
	float a,r,i;
	char opcion;
	
	do{
	
	menu();
	
	cout<<"\nIngrese una opcion:";
	cin>>opcion;
	
	switch(opcion)
	{
		case 'p':
		
		int j;
	    j=polarToRectangular(a,r);
	    system("pause");
	    system("cls");
		break;
		
		case 'r':
			int k;
			k=rectangularToPolar(r,i);
			system("pause");
	        system("cls");
			break;
		case 'n':
			cout<<"\n Gracias por utilizar el programa"<<endl;
			system("pause");
	        system("cls");
			break;
		
		default: 
		    break;
	}
}while(opcion!='n');

return 0;	
} 

void menu()
{
	cout<<"Menu de opciones"<<endl;
	cout<<"p. De polar a rectangular"<<endl;
	cout<<"r. De rectangular a polar"<<endl;
	cout<<"n. Salir"<<endl;
 }
 
 int polarToRectangular(float a,float r)
 {
 	float x,y;
 	
	cout<<"Ingrese el valor del angulo:";
 	cin>>a;
 	cout<<endl;
 	
	cout<<"Ingrese el valor del radio:";
 	cin>>r;
 	cout<<endl;
 	
 	x=r*cos(a*PI/180);
    y=r*sin(a*PI/180);
    
 	cout<<"Coordenadas polares:"<<endl;
 	
 	cout<<"A("<<a<<","<<r<<")";
	cout<<endl;
 	
 	cout<<"Coordenadas rectangulares:";
	cout<<endl;
 	
 	printf("A(%f ñ i(%f))",x,y);
	cout<<endl;
 	
 	return 0;
 }
 
 int rectangularToPolar(float r, float i)
 {
 	float x,y;
 	
 	cout<<"\nIngrese parte real:";
 	cin>>r;
 	cout<<endl;
 	
 	cout<<"Ingrese parte imaginaria:";
 	cin>>i;
 	cout<<endl;
 	
 	x=sqrt(pow(r,2)+pow(i,2));
 	y=tan(i*PI/180)/tan(r*PI/180); //aqui deberia ser arcotangente
 	
 	cout<<"Forma rectangular:"<<endl;
    cout<<endl;
 	cout<<" "<<r<<"ñ"<<"("<<i<<")"<<"i"<<endl;
 	
 	cout<<"\nForma polar:"<<endl;
 	cout<<endl;
 	cout<<"A("<<x<<"ñ"<<"("<<y<<")"<<")"<<endl;

 }
