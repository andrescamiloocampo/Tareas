/*Ejercicios 1,9 y vector 2
Autor:Andres Camilo Ocampo Ramirez
Compilado en: dev c++ 5.11
Fecha y hora: 14/09/21 14:19
fuentes bibliograficas: https://www.geeksforgeeks.org/split-a-sentence-into-words-in-cpp/
*/

#include<fstream>
#include<iostream>
#include<cstdlib>
#include<time.h>
#include<string.h>
#include <bits/stdc++.h>

#define TAM_MAX 30
using namespace std;

int menu();
int exp();
void estadExp(int acelerados,int desacelerados,int aceleracionN,int n,float promedioA,float promedioD,float aceleracion[TAM_MAX]);
int fraseP();
int aleatorios();
void sacarP(char frase[100]);

int main()
{
	float aceleracion[TAM_MAX];
	float promedioA,promedioD;
	int opcion,n,vector[300];
	int acelerados=0,desacelerados=0,aceleracionN=0;
	char frase[100];
	
	opcion=menu();
	
	while(opcion!=0)
	{
	switch(opcion)
	{
		case 1: cout<<"ESTADISTICAS DE LOS EXPERIMENTOS"<<endl<<endl;
		        int e;
		        e=exp();
		        estadExp(acelerados,desacelerados,aceleracionN,n,promedioA,promedioD,aceleracion);
		        break;
	    case 2: cout<<"NUMEROS ALEATORIOS"<<endl;
	             int a;
	             a=aleatorios();
	             break;
	    case 3: cout<<"PAlABRAS EN UNA FRASE"<<endl;
	             int f;
	             f=fraseP();
	             cout<<endl;
	             break;
	             
	    case 0: cout<<"Gracias por utilizar el programa";
	            break;
	    
	    default: cout<<"Error";
	            break;
	}
   system("pause");
   system("cls");
   opcion=menu();
}
if(opcion==0)
{
	cout<<"Gracias por utilizar el programa";
}
	return 0;
}

int menu()
{
	int opcion;
	
	system("color B0");
	
	cout<<"MENU DE OPCIONES"<<endl<<endl;
	
	cout<<"1. Estadisticas de los experimentos"<<endl;
	cout<<"2. Numeros aleatorios"<<endl;
	cout<<"3. Palabras de una frase"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"Ingrese una opcion:";
	cin>>opcion;
	cout<<endl;
	
	while(opcion<0 or opcion>3)
	{
		cout<<"Ingrese una opcion valida:";
		cin>>opcion;
	}
	
	return opcion;
}

int exp()
{
	int n,i;
	float velF[TAM_MAX],velI[TAM_MAX],distancia[TAM_MAX],aceleracion[TAM_MAX];
	int acelerados,desacelerados,aceleracionN;
	float promedioA,promedioD,sumaA=0,sumaB=0;
	
	fstream archivoEst;
	fstream archivoExp;
	archivoExp.open("experimentosN.txt",ios::in | ios::out | ios::app);
	
	if(archivoExp.fail())
	{
		cout<<"\n No se puede abrir el archivo";
		return -1;
	}
	
	cout<<"Ingrese la cantidad de experimentos:";
	cin>>n;
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<"Ingrese la velocidad inicial del experimento "<<i+1<<":";
		cin>>velI[i];
		cout<<endl;
		cout<<"\nIngrese la velocidad final del experimento "<<i+1<<":";
		cin>>velF[i];
		cout<<endl;
		cout<<"Ingrese la distancia del experimento "<<i+1<<":";
		cin>>distancia[i];

		aceleracion[i]=(velF[i]-velI[i])/distancia[i];
		
		if(aceleracion[i]>0)
		{
			acelerados++;
			sumaA=sumaA+aceleracion[i];
		}
		if(aceleracion[i]<0)
		{
			desacelerados++;
			sumaB=sumaB+aceleracion[i];
		}
		else
		{
		aceleracionN++;
		}
			promedioA=sumaA/acelerados;
	        promedioD=sumaB/desacelerados;
		
		archivoExp<<"\nExperimento "<<i+1<<":"<<endl;
		archivoExp<<"Velocidad inicial: "<<velI[i]<<endl;
		archivoExp<<"Velocidad final: "<<velF[i]<<endl;
		archivoExp<<"Distancia: "<<distancia[i]<<endl;
		archivoExp<<"Aceleracion: "<<aceleracion[i]<<endl;
    }
	archivoExp.close();
	return 0;
}

void estadExp(int acelerados,int desacelerados,int aceleracionN,int n,float promedioA,float promedioD,float aceleracion[TAM_MAX])
{
	fstream archivoEs;
	archivoEs.open("estadisticasExp.txt", ios::in | ios::out | ios::app);
	
	archivoEs<<"\n Acelerados: "<<acelerados<<endl;
	archivoEs<<"Desacelerados: "<<desacelerados<<endl;
	archivoEs<<"Aceleracion nula: "<<aceleracionN<<endl;
	archivoEs<<"Promedio de aceleracion: "<<promedioA<<endl;
	archivoEs<<"Promedio de desaceleracion: "<<promedioD;
	
	archivoEs.close();
}

int aleatorios()
{
	int vector[300],dimension,i,j,k;
	int positivos=0,negativos=0,mayor=0,menor=0,unos=0;
	cout<<"Ingrese la cantidad de numeros aleatorios:";
	cin>>dimension;
	cout<<endl;
	
	while(dimension>300 or dimension<=0)
	{
		cout<<"Ingrese un valor de dimension entre 1 y 300:";
		cin>>dimension;
	}
	
	for(i=0;i<dimension;i++)
	{
		vector[i]=-300+rand()%(301 -(-300));
		cout<<"["<<vector[i]<<"]"<<endl;
		
		if(vector[i]>0)
		{
			positivos=positivos+1;
		}
     	else
		{
			negativos=negativos=negativos+1;
		}
			for(j=0;j<dimension;j++)
	        {
		      if(vector[i]>mayor)
		      {
			    mayor=vector[i];
		      }
	        }
	        for(k=0;k<dimension;k++)
	        {
	        	if(vector[i]<menor)
	        	{
	        		menor=vector[i];
				}
			}
	}
	
	cout<<endl;	
	cout<<"Positivos:"<<positivos<<endl;
	cout<<"Negativos:"<<negativos<<endl;
	cout<<"Mayor:"<<mayor<<endl;
	cout<<"Menor:"<<menor<<endl;
}

int fraseP()
{
	char frase[100];
	
	cout<<"Ingrese una frase:";
	cin.ignore();
	cin.getline(frase,99,'\n');
    sacarP(frase);

	return 0;
}

void sacarP(char frase[100])
{
	char *token = strtok(frase, " ");

	while (token != NULL)
	{
		int longitud;
		longitud=strlen(token);
		cout<<"\n"<<token<<":"<<longitud;
		token = strtok(NULL, " ");
	}
}

