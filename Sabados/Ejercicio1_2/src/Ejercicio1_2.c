/*
 ============================================================================
 Dante Saldivar
 Ejercicio1_2
 Ingresar 5 números. Determinar cuál es el máximo
 y el mínimo e indicar en qué orden fue ingresado.
 Division H
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int numeroIngresado;
	int totalNumeros;
	int numeroMaximo;
	int numeroMinimo;
	int ordenMaximo;
	int ordenMinimo;
	char banderaPrimero;

	banderaPrimero='i';

	for(totalNumeros=1;totalNumeros<6;totalNumeros++)
	{
		printf("%d- Ingrese un numero: ",totalNumeros);
		scanf("%d",&numeroIngresado);

		if (banderaPrimero=='i')
		{
			numeroMaximo=numeroIngresado;
			ordenMaximo=totalNumeros;
			numeroMinimo=numeroIngresado;
			ordenMinimo=totalNumeros;

			banderaPrimero='o';
		}
		else
		{
			if(numeroMaximo<numeroIngresado)
			{
				numeroMaximo=numeroIngresado;
				ordenMaximo=totalNumeros;

			}
			if(numeroMinimo>numeroIngresado)
			{
				numeroMinimo=numeroIngresado;
				ordenMinimo=totalNumeros;

			}
		}
	}

	printf("El Maximo ingresado es: %d , fue ingresado la %d vez.",numeroMaximo,ordenMaximo);
	printf("\nEl minimo ingresado es: %d , fue ingresado la %d vez.",numeroMinimo,ordenMinimo);

	return 0;
}
