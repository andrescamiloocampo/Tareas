/*Proyecto de Semestre: Convertidor de temperatura y presion
Autor: Andres Camilo Ocampo Ramirez
Compilado en: Dev C++ 5.11
Fecha:25/08/21 12:07
*/

#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int menu(int opcion);
int menuT(int opcion1);
int tempC(float celsius);
int tempF(float fahr);
int tempk(float kelvin);
int tempR(float ran);
int tempRe(float rea);
int menuP(int opcion2);
int presionA(float atm);
int presionP(float pascal);
int presionL(float psi);
int presionT(float torr);

int main()
{
	int opcion;
    int opcion1;
    int opcion2;
    
    system("color F0");
    opcion=menu(opcion);

	float celsius,fahr,kelvin,ran,rea;
	float atm,psi,torr,pascal;
		
	while(opcion!=0)
	{
	switch(opcion)
	{
		case 1: system("color B0");
		          opcion1=menuT(opcion1);
				   
		          switch(opcion1)
		          {
		          	case 1: 
		          	   int c;
		          	     c=tempC(celsius);
		          	     break;
		            case 2:
		               int f;
		                 f=tempF(fahr);
		                 break;
		            case 3:
		            	int k;
		            	k=tempk(kelvin);
		            	break;
		            case 4:
					    int r;
						r=tempR(ran);
						break;	
					case 5:
					    int l;
						l=tempRe(rea);
						break;
					case 0: cout<<"Salir";
					        break;	
				  }
						
				break;
	               
		case 2:   system("color C0");
		          opcion2=menuP(opcion2);
		          
		          switch(opcion2)
		          {
		          	case 1:
		          		int a;
		          		a=presionA(atm);
		          		break;
		          	case 2:
		          		int p;
		          		p=presionP(pascal);
		          		break;
		          	case 3:
		          		int s;
		          		s=presionL(psi);
		          		break;
		          	case 4:
		          		int t;
		          		t=presionT(torr);
		          		break;
		          	case 0:
		          		cout<<"\nGracias por utilizar el programa"<<endl;
		          		break;
		          		
		          	default: break;
				  }
				  break;
		           
			case 0:
			     cout<<"\nGracias por utilizar el programa";
			     break;
			     
		    default: break;
	}
   system("pause");
   system("cls");
   system("color F0");
   opcion=menu(opcion);
}
	return 0;
}

int menu(int opcion)
{
	cout<<"===================================";
	cout<<"\nCONVERSOR DE TEMPERATURA Y PRESION"<<endl;
	cout<<"==================================="<<endl;
	cout<<"\nIngrese a la opcion correspondiente:"<<endl;
	
	cout<<"\n1. Temperatura"<<endl;
	cout<<"2. Presion"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"----->";
	cin>>opcion;
	
	while(opcion<0 or opcion>2)
	{
		cout<<"Ingrese una opcion valida:";
		cin>>opcion;
	}
		
	return opcion;
}

int menuT(int opcion1)
{
	cout<<"\nCONVERTIR UNIDADES DE TEMPERATURA"<<endl;
	
	cout<<"Seleccione su unidad de temperatura:"<<endl;
	
	cout<<endl;
	cout<<"1. Celsius"<<endl;
	cout<<"2. Fahrenheit"<<endl;
	cout<<"3. Kelvin"<<endl;
	cout<<"4. Rankine"<<endl;
	cout<<"5. Reaumur"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"----->";
	cin>>opcion1;
		
		while(opcion1<0 or opcion1>5)
	{
		cout<<"\nIngrese una opcion valida:";
		cin>>opcion1;
	}
		
	return opcion1;
	
}

int tempC(float celsius)
{
	int opc;
	
	cout<<"\nIngrese la temperatura en celsius:";
	cin>>celsius;
	cout<<endl;
	
	cout<<"Seleccione a que temperatura desea transformar:"<<endl;
	
	cout<<"\n1. Celsius a Fahrenheit"<<endl;
	cout<<"2. Celsius a Kelvin"<<endl;
	cout<<"3. Celsius a Rankine"<<endl;
	cout<<"4. Celsius a Reaumur"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"\nIngrese una opcion:";
	cin>>opc;
	
	while(opc>4 or opc<0)
	{
		cout<<"Ingrese una opcion valida";
		cin>>opc;
	}
	
	switch(opc)
	{
		case 1: celsius=celsius*1.8+32;
		        cout<<"\nLa temperatura en Fahrenheit es:"<<celsius<<endl;
		        break;
	    case 2: celsius=celsius+273.15;
	            cout<<"\nLa temperatura en kelvin es:"<<celsius<<endl;
	            break;
	    case 3: celsius=celsius*1.8+491.67;
	            cout<<"\nLa temperatura en Rankine es:"<<celsius<<endl;
	            break;
	    case 4: celsius=celsius*0.8;
	            cout<<"\nLa temperatura en Reaumur es:"<<celsius<<endl;
	            break;
	    case 0: cout<<"Gracias por utilizar el programa"<<endl;
	            break;
	    
		default: cout<<"Opcion invalida";
		         break;
	            
	}
	
}

int tempF(float fahr)
{
	int opc;
		
	cout<<"Ingrese la temperatura en Fahrenheit:";
	cin>>fahr;
	
	cout<<"Seleccione a que temperatura desea transformar:"<<endl;
	
	cout<<"\n1. Fahrenheit a Celsius"<<endl;
	cout<<"2. Fahrenheit a Kelvin"<<endl;
	cout<<"3. Fahrenheit a Rankine"<<endl;
	cout<<"4. Fahrenheit a Reaumur"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"\nIngrese una opcion:";
	cin>>opc;
	
		while(opc>4 or opc<0)
	{
		cout<<"Ingrese una opcion valida:";
		cin>>opc;
	}
	
	switch(opc)
	{
		case 1: fahr=(fahr-32)*0.5555;
		        cout<<"\nLa temperatura en Celsius es:"<<fahr<<endl;
		        break;
	    case 2: fahr=(fahr-32)*0.5555;
	            cout<<"\nLa temperatura en kelvin es:"<<fahr<<endl;
	            break;
	    case 3: fahr=fahr+459.67;
	            cout<<"\nLa temperatura en Rankine es:"<<fahr<<endl;
	            break;
	    case 4: fahr=(fahr-32)*0.4444;
	            cout<<"\nLa temperatura en Reaumur es:"<<fahr<<endl;
	            break;
	    case 0: cout<<"Gracias por utilizar el programa"<<endl;
	            break;
	    
		default: cout<<"Opcion invalida";
		         break;
	            
	}
}

int tempk(float kelvin)
{
	int opc;
	
	cout<<"\nIngrese la temperatura en kelvin:";
	cin>>kelvin;
	cout<<endl;
	
	cout<<"Seleccione a que temperatura desea transformar:"<<endl;
	
	cout<<"\n1. kelvin a celsius"<<endl;
	cout<<"2. kelvin a fahrenheit"<<endl;
	cout<<"3. kelvin a Rankine"<<endl;
	cout<<"4. kelvin a Reaumur"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"\nIngrese una opcion:";
	cin>>opc;
	
	while(opc<0 or opc>4)
	{
		cout<<"\nIngrese una opcion valida:";
		cin>>opc;
	}
		
	switch(opc)
	{
		case 1: kelvin=kelvin-273.15;
		        cout<<"\nLa temperatura en Celsius es:"<<kelvin<<endl;
		        break;
	    case 2: kelvin=((kelvin-273.15)*1.8)+32;
	            cout<<"\nLa temperatura en fahrenheit es:"<<kelvin<<endl;
	            break;
	    case 3: kelvin=kelvin*1.8;
	            cout<<"\nLa temperatura en Rankine es:"<<kelvin<<endl;
	            break;
	    case 4: kelvin=4*(kelvin-273.15)/5;
	            cout<<"\nLa temperatura en Reaumur es:"<<kelvin<<endl;
	            break;
	    case 0: cout<<"Gracias por utilizar el programa"<<endl;
	            break;
	    
		default: cout<<"Opcion invalida";
		         break;
	            
	}	
}

int tempR(float ran)
{
	int opc;
	
	cout<<"\nIngrese la temperatura en Rankine:";
	cin>>ran;
	cout<<endl;
	
	cout<<"Seleccione a que temperatura desea transformar:"<<endl;
	
	cout<<"\n1. Rankine a celsius"<<endl;
	cout<<"2. Rankine a fahrenheit"<<endl;
	cout<<"3. Rankine a Kelvin"<<endl;
	cout<<"4. Rankine a Reaumur"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"\nIngrese una opcion:";
	cin>>opc;
	
	while(opc<0 or opc>4)
	{
		cout<<"\nIngrese una opcion valida:";
		cin>>opc;
	}
		
	switch(opc)
	{
		case 1: ran=(ran-491.67)*0.555555;
		        cout<<"\nLa temperatura en Celsius es:"<<ran<<endl;
		        break;
	    case 2: ran=ran-459.67;
	            cout<<"\nLa temperatura en fahrenheit es:"<<ran<<endl;
	            break;
	    case 3: ran=ran*0.555;
	            cout<<"\nLa temperatura en kelvin es:"<<ran<<endl;
	            break;
	    case 4: ran=(ran-491.67)*0.555;
	            cout<<"\nLa temperatura en Reaumur es:"<<ran<<endl;
	            break;
	    case 0: cout<<"Gracias por utilizar el programa"<<endl;
	            break;
	    
		default: cout<<"Opcion invalida";
		         break;
	            
	}	
}

int tempRe(float rea)
{
	int opc;
	
	cout<<"\nIngrese la temperatura en Reaumur:";
	cin>>rea;
	cout<<endl;
	
	cout<<"Seleccione a que temperatura desea transformar:"<<endl;
	
	cout<<"\n1. Reaumur a celsius"<<endl;
	cout<<"2. Reaumur a fahrenheit"<<endl;
	cout<<"3. Reaumur a Kelvin"<<endl;
	cout<<"4. Reaumur a Rankine"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"\nIngrese una opcion:";
	cin>>opc;
	
	while(opc<0 or opc>4)
	{
		cout<<"\nIngrese una opcion valida:";
		cin>>opc;
	}
		
	switch(opc)
	{
		case 1: rea=(rea*5)/4;
		        cout<<"\nLa temperatura en Celsius es:"<<rea<<endl;
		        break;
	    case 2: rea=((rea*9)/4)+32;
	            cout<<"\nLa temperatura en fahrenheit es:"<<rea<<endl;
	            break;
	    case 3: rea=((rea*5)/4)+273.15;
	            cout<<"\nLa temperatura en kelvin es:"<<rea<<endl;
	            break;
	    case 4: rea=((rea*9)/4)+491.67;
	            cout<<"\nLa temperatura en Rankine es:"<<rea<<endl;
	            break;
	    case 0: cout<<"Gracias por utilizar el programa"<<endl;
	            break;
	    
		default: cout<<"Opcion invalida";
		         break;
	            
	}	
}

int menuP(int opcion2)
{

cout<<"\nCONVERTIR UNIDADES DE PRESION"<<endl;
	
	cout<<"Seleccione su unidad de presion:"<<endl;
	
	cout<<endl;
	cout<<"1. Atmosfera"<<endl;
	cout<<"2. Pascal"<<endl;
	cout<<"3. Psi"<<endl;
	cout<<"4. Torr"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"----->";
	cin>>opcion2;
	
	while(opcion2<0 or opcion2>4)
	{
		cout<<"\nIngrese opcion valida:";
		cin>>opcion2;
	}
		
	return opcion2;
}

//===========================================================================

int presionA(float atm)
{
	int opc;
	
	cout<<"Ingrese la presion en atmosfera:";
	cin>>atm;
	cout<<endl;
	
	cout<<"Seleccione a que presion desea transformar:"<<endl;
	
	cout<<"1. Torr"<<endl;
	cout<<"2. Pascal"<<endl;
	cout<<"3. Psi"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"\nIngrese una opcion:";
	cin>>opc;
	
	while(opc<0 or opc>3)
	{
		cout<<"Ingrese opcion valida:";
		cin>>opc;
		cout<<endl;
	}
	
	switch(opc)
	{
		case 1: atm=atm*760;
		        cout<<"\nLa presion en Torr es:"<<atm<<endl;
		        break;
	    case 2: atm=atm*101325;
	            cout<<"\nLa presion en Pascal es:"<<atm<<endl;
	            break;
	    case 3: atm=atm*14.6959;
	            cout<<"\nLa presion en Psi es:"<<atm<<endl;
	            break;
	            
	    case 0: cout<<"Gracias por utilizar el programa"<<endl;
	            break;
	    
		default: cout<<"Opcion invalida";
		         break;
	            
	}	
}

//========================================================================

int presionP(float pascal)
{

	int opc;
	
	cout<<"Ingrese la presion en pascales:";
	cin>>pascal;
	cout<<endl;
	
	cout<<"Seleccione a que presion desea transformar:"<<endl;
	
	cout<<"1. Atmosfera"<<endl;
	cout<<"2. Psi"<<endl;
	cout<<"3. Torr"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"\nIngrese una opcion:";
	cin>>opc;
	
	while(opc<0 or opc>3)
	{
		cout<<"Ingrese opcion valida:";
		cin>>opc;
		cout<<endl;
	}
	
	switch(opc)
	{
		case 1: pascal=pascal/101325;
		        cout<<"\nLa presion en Atmosferas es:"<<pascal<<endl;
		        break;
	    case 2: pascal=pascal/6895;
	            cout<<"\nLa presion en Psi es:"<<pascal<<endl;
	            break;
	    case 3: pascal=pascal/133;
	            cout<<"\nLa presion en Torr es:"<<pascal<<endl;
	            break;
	            
	    case 0: cout<<"Gracias por utilizar el programa"<<endl;
	            break;
	    
		default: cout<<"Opcion invalida";
		         break;
	            
	}	
}

//===================================================================================


int presionL(float psi)
{

int opc;
	
	cout<<"Ingrese la presion en libra por pulgada cuadrada:";
	cin>>psi;
	cout<<endl;
	
	cout<<"Seleccione a que presion desea transformar:"<<endl;
	
	cout<<"1. Atmosfera"<<endl;
	cout<<"2. Pascal"<<endl;
	cout<<"3. Torr"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"\nIngrese una opcion:";
	cin>>opc;
	
	while(opc<0 or opc>3)
	{
		cout<<"Ingrese opcion valida:";
		cin>>opc;
		cout<<endl;
	}
	
	switch(opc)
	{
		case 1: psi=psi/14.696;
		        cout<<"\nLa presion en Atmosferas es:"<<psi<<endl;
		        break;
	    case 2: psi=psi*6895;
	            cout<<"\nLa presion en Pascal es:"<<psi<<endl;
	            break;
	    case 3: psi=psi*51.715;
	            cout<<"\nLa presion en Torr es:"<<psi<<endl;
	            break;
	            
	    case 0: cout<<"Gracias por utilizar el programa"<<endl;
	            break;
	    
		default: cout<<"Opcion invalida";
		         break;
	            
	}	
}

//====================================================================================

int presionT(float torr)
{

int opc;
	
	cout<<"Ingrese la presion en Torr:";
	cin>>torr;
	cout<<endl;
	
	cout<<"Seleccione a que presion desea transformar:"<<endl;
	
	cout<<"1. Atmosfera"<<endl;
	cout<<"2. Pascal"<<endl;
	cout<<"3. Psi"<<endl;
	cout<<"0. Salir"<<endl;
	
	cout<<"\nIngrese una opcion:";
	cin>>opc;
	
	while(opc<0 or opc>3)
	{
		cout<<"Ingrese opcion valida:";
		cin>>opc;
		cout<<endl;
	}
	
	switch(opc)
	{
		case 1: torr=torr/760;
		        cout<<"\nLa presion en Atmosferas es:"<<torr<<endl;
		        break;
	    case 2: torr=torr*133;
	            cout<<"\nLa presion en Pascal es:"<<torr<<endl;
	            break;
	    case 3: torr=torr/51.715;
	            cout<<"\nLa presion en Psi es:"<<torr<<endl;
	            break;
	            
	    case 0: cout<<"\nGracias por utilizar el programa"<<endl;
	            break;
	    
		default: cout<<"Opcion invalida";
		         break;
	            
	}	

}

