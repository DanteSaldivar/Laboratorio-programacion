/*
 ============================================================================
 Name        : Actividad02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numeroIngresado;
		int acumuladorNumeros;
		int contadorVueltas;
		char confirmarVueltas;
		float promedio;

		contadorVueltas=0;
		confirmarVueltas='s';
		acumuladorNumeros=0;

		while(confirmarVueltas=='s')
		{
			printf("\n Ingrese el número \n");
			scanf("%d",&numeroIngresado);
			printf("\n ¿Desea Continuar? s/n \n");
			__fpurge(stdin);
			scanf("%c",&confirmarVueltas);
			acumuladorNumeros=acumuladorNumeros+numeroIngresado;
			contadorVueltas=contadorVueltas+1;
		}

		promedio=(float)acumuladorNumeros/contadorVueltas;

		printf("\n El promedio es: %f", promedio);
		return 0;
	return 0;
}
	/*char respuestaIngresada;
	int numeroIngresado;
	int contadorNumeros;
	int sumaNumeros;
	float promedioNumeros;

	respuestaIngresada='s';
	contadorNumeros=0;
	sumaNumeros=0;

	while(respuestaIngresada=='s')
	{
		printf("Ingrese un numero: \n");
		scanf("%d",&numeroIngresado);

		sumaNumeros+=numeroIngresado;
		contadorNumeros++;

		printf("\n Desea seguir ingresando datos 's/n'\n");
		__fpurge(stdin);
		scanf("%c",&respuestaIngresada);
	}

	promedioNumeros=(float)sumaNumeros/contadorNumeros;

	printf("El promedio de los numeros es %f",promedioNumeros);*/
