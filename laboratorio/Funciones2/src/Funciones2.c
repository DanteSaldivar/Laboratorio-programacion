/*
 ============================================================================
 Name        : Funciones2.c
 Author      : Dante
 Version     :
 Copyright   : Division H
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

float sumar(float numero1, float numero2);
float restar(float numero1, float numero2);
float multiplicar(float numero1, float numero2);
//NO SE PUEDE DIVIDIR POR CERO EN CASO QUE INGRESE 0 RETORNAR 0
float dividirInt(int divisor, int dividendo);
float divdirFloat(float divisor, float dividendo);
int main(void) {

	int respuestaUsuario;
	char respuesta;
	float numero1;
	float numero2;
	float r1;
	float r2;
	float r3;
	float r4;
	float r5;


	do{
		printf("\nDame un numero: ");
	scanf("%f", &numero1);
	printf("\nDame un numero: ");
	scanf("%f", &numero2);

	printf("\n%f\n%f",numero1,numero2);

	printf("Ingrese el tipo de  operacion: '1'suma '2' resta '3'multiplicacion '4'division ");
	scanf("%d", &respuestaUsuario);

	switch (respuestaUsuario) {
		case 1:
		r1=sumar(numero1,numero2);
		printf("\nLa suma es: %.2f",r1);
		break;
		case 2:
		r2=restar(numero1,numero2);
			printf("\nLa resta es: %.2f",r2);
		break;
		case 3:
		r3=multiplicar(numero1,numero2);
		printf("\nLa multiplicacion es: %.2f",r3);
		break;
		case 4:
		printf("\nIngrese el tipo de  operacion: '1'entero '2' float  ");
			scanf("%d", &respuestaUsuario);
		switch (respuestaUsuario) {
			case 1:
			r4=dividirInt((int)numero1, (int)numero2);
			printf("\nLa divisionINt es: %.2f",r4);
			break;
			case 2:
			r5=divdirFloat(numero1, numero2);
			printf("\nLa suma divisionFloat: %.2f",r5);
			break;
		}
		break;
	}

	printf("\nDesea volver a empezar 'n'no,'s'si ");
	__fpurge(stdin);
	scanf("%c",&respuesta);

	}while(respuesta!='n');





	return 0;
}

float sumar(float numero1, float numero2) {
	float resultado;
	resultado = numero1 + numero2;
	return resultado;
}
float restar(float numero1, float numero2) {
	float resultado;
	resultado = numero1 - numero2;
	return resultado;
}
float multiplicar(float numero1, float numero2) {
	float resultado;
	resultado = numero1 * numero2;
	return resultado;
}
float dividirInt(int divisor, int dividendo) {
	float cociente;
	if (dividendo != 0) {
		cociente = (float)divisor / dividendo;
	} else {
		cociente = 0;
	}

	return cociente;
}
float divdirFloat(float divisor, float dividendo) {
	float cociente;
	if (dividendo != 0) {
		cociente = divisor / dividendo;
	} else {
		cociente = 0;
	}

	return cociente;

}

