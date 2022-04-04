/*
 ============================================================================
 Name        : Funciones.c
 Author      : Dante
 Version     :
 Copyright   : Division H
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


	//Funciones

	//RETORNO - NOMBRE (ARGUMENTOS... O - INFINITOS)
	//RETORNO RIPO DE DATO - int - float - double - char - void - void*
	//NOMBRE Lo que ustedes le quieran poner... PERO SIGNIFICATIVO
	//ARGUMENTO -Las variables de entrada.


int Sumar (int numA, int numB);
int Barras (float dividendo,float divisor, float* cociente);

int main(void) {

	int num1=4;
	int num2=2;
	int resultado;
	float division;

	division=10;

	resultado=Sumar(num1, num2);

	Barras(num1,num2,division);

	printf("La suma es: %d",resultado);
	printf("\nLa division da: %.2f",division);
	return 0;

}

int Sumar (int numA, int numB){

	int resultado;

	resultado=numA+numB;

	return resultado;
}

int Barras (float dividendo, float divisor, float* cociente){

	int rtn;

	if (divisor!=0)
	{
		*cociente=dividendo/divisor;
		rtn=0;
	}
	else
	{
		rtn=0;
	}

	return rtn;
}







