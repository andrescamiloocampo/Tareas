#include<fstream>
#include<iostream>
#define TAM_MAX 45

using namespace std;

int crearArchivo();
int leerArchivo(string nombre[],float matriz[][5]);
void mostrar(string nombre[],float notas[][5],int n);
void calcularEstad(int n,float notas[][5],string nombre[]);
void calculoDef(int n, float matriz[][5]);

int main()
{
	int re,es;
	int n;
	string nombre[TAM_MAX];
	float matriz[TAM_MAX][5];
	
	re=crearArchivo();
	
	
	if(re==-1)
	{
		cout<<"Lo siento no se pudo crear el archivo"<<endl;
	}
	n=leerArchivo(nombre,matriz);
	
	if(n==-1)
	{
		cout<<"Lo siento no se pudo crear el archivo";
	}
	
	  calculoDef(n,matriz);
	  mostrar(nombre,matriz,n);
	  calcularEstad(n,matriz,nombre);
	  
	  
	return 0;
}

int crearArchivo()
{
	string nombre;
	float notas[4];
	char seguir;
	int i;
	
	fstream archi;
	archi.open("estudNota.txt",ios::in | ios::out | ios::app);
	if(archi.fail())
	{
		cout<<"Error para abrir el archivo ";
		return -1;
	}
	seguir = 's';
	do
	{
		cout<<"Ingrese el nombre del estudiante:";
		cin.ignore();
		getline(cin,nombre);
		//cin.ignore();
		archi<<nombre<<" ";
		for(i=0;i<4;i++)
		{
			do
			{
				cout<<"Ingrese nota del estudiante: ";
				cin>>notas[i];
			}while(notas[i]<0.0 or notas[i]>5.0);
			archi<<notas[i]<<" ";
	    }
			archi<<"\n";
			
			cout<<"Seguir entrando datos:";
			cin>>seguir;
		}while(seguir=='s');
		
   archi.close();
   return 1;
}

int leerArchivo(string nombre[],float matriz[][5])
{
	int n,i,j;
	ifstream archi;
	archi.open("estudNota.txt");
	
	if(archi.fail())
	{
		cout<<"Error al abrir el archivo";
		return -1;
	}
	else
	{
		i=0;
		while(!archi.eof())
		{
			archi>>nombre[i]>>matriz[i][0]>>matriz[i][1]>>matriz[i][2]>>matriz[i][3];
			matriz[i][4]=0.0;
			i++;
		}
		archi.close();
		return i-1;
	}
}

void mostrar(string nombre[],float notas[][5],int n)
{
	int i;
	system("cls");
	cout<<"N Nombre Nota 1, Nota 2, Nota 3, Nota 4 Definitiva"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<endl;
		cout<<i+1<<nombre[i]<<" ";
		
		cout<<notas[i][0]<<" "<<" "<<notas[i][1]<<" "<<notas[i][2]<<" "<<notas[i][3]<<" "<<notas[i][4]<<" ";
		
	}
}

void calculoDef(int n, float matriz[][5])
{
	int i,j;
	float suma;
	
	for(i=0;i<=n;i++)
	{
		suma=0;
		for(j=0;j<=4;j++)
		{
			suma=suma+matriz[i][j];
		}
		matriz[i][4]=suma/4;
	}
}


void calcularEstad(int n,float notas[][5],string nombre[])
{
	int ganaron,perdieron,sobreP,bajoP,i;
	float suma=0;
	float promedio;
	fstream archivoEst;
	
	archivoEst.open("EstudianteEstadistica.txt",ios::out | ios::app);
	
	ganaron=0;
	perdieron=0;
	
	for(i=0;i<=n;i++)
	{
		if(notas[i][4]>=3.0)
		{
			ganaron++;
		}
		else
		{
			perdieron++;
		}
	}
	
	for(i=0;i<=n;i++)
	{
		suma=suma+notas[i][4];
	}
	promedio=suma/n;
	sobreP=0;
	bajoP=0;
	
	for(i=0;i<=n;i++)
	{
		if(promedio<notas[i][4])
		{
			sobreP=sobreP+1;
		}
		else
		{
			if(promedio>notas[i][4])
			{
				bajoP=bajoP+1;
			}
		}
	}
	
	archivoEst<<"\nLa nota promedio es: "<<promedio<<endl;
	archivoEst<<"Estudiantes que ganaron: "<<ganaron<<endl;
	archivoEst<<"Estudiantes que estan sobre el promedio:"<<sobreP<<endl;
	archivoEst<<"Estudiantes por debajo del promedio:"<<bajoP;
	
	archivoEst.close();
	
}


