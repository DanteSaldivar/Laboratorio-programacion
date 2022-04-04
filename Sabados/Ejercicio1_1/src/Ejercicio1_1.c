/*
 ============================================================================
 Dante Saldivar
 Ejercicio1_1
 Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
	El promedio de los números positivos.
	El promedio de los números negativos.

 Division H
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
int main(void) {

	int numeroIngresado;
	int sumaNumerosPositivos;
	int sumaNumerosNegativos;
	int contadorPositivos;
	int contadorNegativos;
	char respuestaIngresada;
	float promedioPositivos;
	float promedioNegativos;

	sumaNumerosPositivos=0;
	sumaNumerosNegativos=0;
	contadorPositivos=0;
	contadorNegativos=0;

	do{
		printf("Ingrese el numero que desee: ");
		scanf("%d",&numeroIngresado);

		if (numeroIngresado>0){
			contadorPositivos++;
			sumaNumerosPositivos+=numeroIngresado;
		}
		else
		{
			contadorNegativos++;
			sumaNumerosNegativos+=numeroIngresado;
		}

		printf("\nDesea seguir ingresando datos? s/n: ");
		__fpurge(stdin);
		scanf("%c",&respuestaIngresada);

		while(respuestaIngresada!='n'&&respuestaIngresada!='s')
		{
			printf("\nResponder 'n' para salir, 's' para continuar: ");
			__fpurge(stdin);
			scanf("%c",&respuestaIngresada);
		}

	}while(respuestaIngresada=='s');


	if(contadorPositivos==0)
	{
		printf("\nNo se pudo calcular el promedio de Positivos.");
	}
	else
	{
		promedioPositivos=(float)sumaNumerosPositivos/contadorPositivos;
		printf("\nEl promedio de numeros positivos es: %.2f.",promedioPositivos);
	}

	if (contadorNegativos==0)
	{
		printf("\nNo se pudo calcular el promedio de Negativos.");
	}
	else
	{
		promedioNegativos=(float)sumaNumerosNegativos/contadorNegativos;
		printf("\nEl promedio de numeros negativos es: %.2f.",promedioNegativos);
	}


	return 0;
}
