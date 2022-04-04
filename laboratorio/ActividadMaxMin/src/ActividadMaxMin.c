/*
 ============================================================================
 Name        : ActividadMaxMin.c
 Author      : Dante

 Pedir 10 numeros al usuario
 Mostrar el maximo y minimo a medida que se ingresan los numeros.
 ============================================================================
 */

/*
 * Se puede usar como la variable de CONTADOR como si fuera una
 bandera.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int pedidoNumeros;
	int numeroIngresado;
	int numeroMaximo;
	int numeroMinimo;
	int banderaMaximosMinimos;

	banderaMaximosMinimos = 'i';
	for (pedidoNumeros = 0; pedidoNumeros < 10; pedidoNumeros++)
	{
		printf("%d- Ingrese el numero: ", pedidoNumeros + 1);
		scanf("%d", &numeroIngresado);

		if (banderaMaximosMinimos == 'i')
		{
			numeroMaximo = numeroIngresado;
			numeroMinimo = numeroIngresado;
			banderaMaximosMinimos = 'o';
		}
		else
		{
			if (numeroMaximo < numeroIngresado)
			{
				numeroMaximo = numeroIngresado;
				printf("\nEl maximo es %d\n", numeroMaximo);
			}
			if (numeroMinimo > numeroIngresado)
			{
				numeroMinimo = numeroIngresado;
				printf("El minimo es %d\n", numeroMinimo);
			}
		}
	}

	return 0;
}
