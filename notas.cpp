#include <iostream>
#include <math.h>
#define TAM_MAX 45

using namespace std;


int menu ();

float notas_estudiantes();


int main ()
{
   int opcion;
   
   do 
   {
       opcion=menu();
       
       switch(opcion)
       {
           case 1:
           break;
           
           case 2: 
           notas_estudiantes();
           break;
           
           case 3:
           break;
           
           case 0:
           cout << "El programa ha finalizado ";
           break;
           
           default: "Ingrese un dato valido ";
       }
   } while(opcion !=0);
   
   return 0;
   
}

int menu ()

{
    int opcion;
    
    cout << "Seleccione el programa a ejecutar" << endl;
    cout << "1. Conversion numeros complejos (p --> r) o (r -->p)" << endl;
    cout << "2. Notas de estudiantes " << endl;
    cout << "3. Impuesto predial " << endl;
    cout << "0. Salir" << endl;
    
    cout << "Ingrese una opcion ";
    cin >> opcion;
    return opcion;
    

}

float notas_estudiantes(){
	int n , i;
    float n1, n2, n3, n4, suma, porcentaje, bonificacion, promedio, notaDefinitiva;

    cout << "Ingrese numero de estudiantes --->";
    cin >> n;

	while (n < 1 or n > TAM_MAX){
		cout << "Ingrese numero de estudiantes valido...";
		cout << "\nIngrese numero de estudiantes --->";
		cin >> n;
	}

	for(i=1 ; i <= n ; i++){

		cout << "Ingrese nota del estudiante: " << i ;

		cout << "\nIngrese nota 1 --->";
		cin >> n1;

	    while (n1 < 0.0 or n1 > 5.0){
		    cout << "ingrese nota 1 valida...";
		    cout << "\nIngrese nota 1 --->";
		    cin >> n1;
	    }

		cout << "Ingrese nota 2 --->";
		cin >> n2;

		  while (n2 < 0.0 or n2 > 5.0){
		    cout << "ingrese nota 2 valida...";
		    cout << "\nIngrese nota 2 --->";
		    cin >> n2;
	    }

		cout << "Ingrese nota 3 --->";
		cin >> n3;

		  while (n3 < 0.0 or n3 > 5.0){
		    cout << "ingrese nota 3 valida...";
		    cout << "\nIngrese nota 3 --->";
		    cin >> n3;
	    }

		cout << "Ingrese nota 4 --->";
		cin >> n4;

		  while (n4 < 0.0 or n4 > 5.0){
		    cout << "ingrese nota 4 valida...";
		    cout << "\nIngrese nota 4 --->";
		    cin >> n4;
	    }

	    suma = n1 + n2 + n3 + n4;
	    promedio = suma / 4;

	    if (promedio >= 4.6){
	    	cout << "Su definitiva es 5.0";
		}
		else if (promedio >= 3.9 and promedio <= 4.5){
			porcentaje = promedio * 0.8;
			bonificacion = porcentaje * 0.1;
			notaDefinitiva = promedio * 0.9 + bonificacion;
		}
		else if (promedio >= 3.0 and promedio <= 3.8){
			porcentaje = promedio * 0.5;
			bonificacion = porcentaje * 0.1;
			notaDefinitiva = promedio * 0.9 + bonificacion;
		}
		else if (promedio >= 2.5 and promedio <= 2.9){
			porcentaje = promedio * 0.3;
			bonificacion = porcentaje * 0.1;
			notaDefinitiva = promedio * 0.9 + bonificacion;
		}
		else if (promedio >= 2.0 and promedio <= 2.4){
			porcentaje = promedio * 0.15;
			bonificacion = porcentaje * 0.1;
			notaDefinitiva = promedio * 0.9 + bonificacion;
		}
		else if (promedio < 2.0){
			
		}

		cout << "\nSu definitiva es: " << notaDefinitiva << " su bonificacion es: "<< bonificacion << endl;

    }

	    system("pause");
	    system("cls");
        return n;
}
