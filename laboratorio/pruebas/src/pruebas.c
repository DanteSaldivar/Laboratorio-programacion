/*
 ============================================================================
 Name        : pruebas.c
 Author      : Dante
 Version     :
 Copyright   : Division H
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>

int main(void) {
		char respuestaIngresada;
		int numeroIngresado;
		int contadorNumeros;
		int sumaNumeros;
		float promedioNumeros;

		respuestaIngresada='s';
		contadorNumeros=0;
		sumaNumeros=0;

		do
		{
			printf("Ingrese un numero: \n");
			scanf("%d",&numeroIngresado);

			sumaNumeros+=numeroIngresado;
			contadorNumeros++;

			printf("\n Desea seguir ingresando datos 's/n'\n");
			__fpurge(stdin);
			scanf("%c",&respuestaIngresada);
		} while (respuestaIngresada=='s');

		promedioNumeros=(float)sumaNumeros/contadorNumeros;

		printf("El promedio de los numeros es %f",promedioNumeros);

		return 0;
}
