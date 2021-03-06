/*
 ============================================================================
 Dante Saldivar
 Division H
 Ejercicio 1_3

 Realizar el algoritmo que permita ingresar los datos de los alumnos
 de una división de la UTN FRA, los datos solicitados son:

	Legajo
	Tipo cursada(L: "libre" - P: "presencial" – R: "remota")
	Cantidad de materias( mas de cero y menos de 8)
	Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
	Nota promedio (entre 0 y 10)
	Edad (validar)

 Se debe informar de existir, o informar que no existe ,
 en el caso que corresponda.

 a) El Legajo del mejor promedio femenino.
 b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
 c) El promedio de nota por sexo.
 d) La edad y legajo del que cursa más materias. (Sin importar su género)

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void) {

	int numeroLegajo;
	char tipoCursada;
	int cantidadMaterias;
	char generoIngresado;
	float notaPromedio;
	int edadIngresada;
	char respuestaUsuario;
	char banderaDelMejorPromedio;
	int legajoMejorPromedio;
	float mejorPromedio;
	char banderaDelMasJoven;
	int legajoMasJoven;
	int edadMasJoven;
	char banderaDelMayorCursante;
	int legajoMayorCursante;
	int materiasMayorCursante;
	int contadorFemenino;
	float notasFemenino;
	float promedioFemenino;
	int contadorMasculino;
	float notasMasculino;
	float promedioMasculino;
	int contadorNoBinario;
	float notasNoBinario;
	float promedioNoBinario;

	banderaDelMejorPromedio='i';
	banderaDelMayorCursante='i';
	banderaDelMasJoven='i';
	contadorFemenino=0;
	contadorMasculino=0;
	contadorNoBinario=0;
	notasFemenino=0;
	notasMasculino=0;
	notasNoBinario=0;

	do
	{
		printf("Ingrese el numero de legajo: ");
		scanf("%d",&numeroLegajo);
		while(numeroLegajo<0)
		{
			printf("\nERROR-- ReIngrese el numero legajo: ");
			scanf("%d",&numeroLegajo);
		}

		printf("\nIngrese el tipo de cursada ('L' libre; 'P' presencial; 'R' remota): ");
		__fpurge(stdin);
		scanf("%c",&tipoCursada);
		while(tipoCursada!='l'&&tipoCursada!='p'&&tipoCursada!='r')
		{
			printf("\nERROR--ReIngrese el tipo de cursada ('L' libre; 'P' presencial; 'R' remota): ");
			__fpurge(stdin);
			scanf("%c",&tipoCursada);
		}

		printf("\nIngrese la cantidad de materias: ");
		scanf("%d",&cantidadMaterias);
		while(cantidadMaterias<0||cantidadMaterias>8)
		{
			printf("\nERROR--ReIngrese la cantidad de materias: ");
			scanf("%d",&cantidadMaterias);
		}

		printf("\nIngrese el Genero ('F' Femenino; 'M' Masculino; 'O' No Binario): ");
		__fpurge(stdin);
		scanf("%c",&generoIngresado);
		while(generoIngresado!='f'&&generoIngresado!='m'&&generoIngresado!='o')
		{
			printf("\nERROR--ReIngrese el Genero ('F' Femenino; 'M' Masculino; 'O' No Binario): ");
			__fpurge(stdin);
			scanf("%c",&generoIngresado);
		}

		printf("\nIngrese la nota promedio de materias: ");
		scanf("%f",&notaPromedio);
		while(notaPromedio<0||notaPromedio>10)
		{
			printf("\nERROR-- ReIngrese la nota promedio de materias: ");
			scanf("%f",&notaPromedio);
		}

		printf("\nIngrese la edad: ");
		scanf("%d",&edadIngresada);
		while(edadIngresada<0||edadIngresada>100)
		{
			printf("\nERROR--ReIngrese la edad: ");
			scanf("%d",&edadIngresada);
		}

		printf("\nDesea seguir ingresando datos? s/n: ");
		__fpurge(stdin);
		scanf("%c",&respuestaUsuario);
		while(respuestaUsuario!='n'&&respuestaUsuario!='s')
		{
			printf("\nERROR-- 's' para seguir, 'n' para salir: ");
			__fpurge(stdin);
			scanf("%c",&respuestaUsuario);
		}


		switch(generoIngresado)
		{
			case 'f':
				if(banderaDelMejorPromedio=='i')
				{
					legajoMejorPromedio=numeroLegajo;
					mejorPromedio=notaPromedio;
					banderaDelMejorPromedio='o';
				}
				else
				{
					if(notaPromedio>mejorPromedio)
					{
						legajoMejorPromedio=numeroLegajo;
						mejorPromedio=notaPromedio;
					}
				}
				contadorFemenino++;
				notasFemenino+=notaPromedio;
			break;
			case 'm':
				if(tipoCursada=='l')
				{
					if(banderaDelMasJoven=='i')
					{
						legajoMasJoven=numeroLegajo;
						edadMasJoven=edadIngresada;
						banderaDelMasJoven='o';
					}
					else
					{
						if(edadIngresada<edadMasJoven)
						{
							legajoMasJoven=numeroLegajo;
							edadMasJoven=edadIngresada;
						}
					}
				}
				contadorMasculino++;
				notasMasculino+=notaPromedio;
			break;
			case 'o':
				contadorNoBinario++;
				notasNoBinario+=notaPromedio;
			break;
		}

		if(banderaDelMayorCursante=='i')
		{
			legajoMayorCursante=numeroLegajo;
			materiasMayorCursante=cantidadMaterias;
			banderaDelMayorCursante='o';
		}
		else
		{
			if(cantidadMaterias<materiasMayorCursante)
			{
				legajoMayorCursante=numeroLegajo;
				materiasMayorCursante=cantidadMaterias;
			}
		}

		if(banderaDelMayorCursante=='i')
		{
			legajoMayorCursante=numeroLegajo;
			materiasMayorCursante=cantidadMaterias;
			banderaDelMayorCursante='o';
		}
		else
		{
			legajoMayorCursante=numeroLegajo;
			materiasMayorCursante=cantidadMaterias;
		}




	}while(respuestaUsuario=='s');

	promedioFemenino=notasFemenino/contadorFemenino;
	promedioMasculino=notasMasculino/contadorMasculino;
	promedioNoBinario=notasNoBinario/contadorNoBinario;

	if (contadorFemenino>0)
	{
		printf("\nEl legajo del mayor promedio Femenino es: %d.\n",legajoMejorPromedio);
		printf("El promedio de notas de alumnos femeninos es de %.2f.\n",promedioFemenino);
	}
	else
	{
		printf("\nNo se registraron alumnos femeninos.\n");
	}
	if(contadorMasculino>0)
	{
		printf("El legajo del masculino mas joven que rinde libre es: %d.\n",legajoMasJoven);
		printf("El promedio de notas de alumnos masculinos es de %.2f.\n",promedioMasculino);

	}
	else
	{
		printf("No se registraron alumnos masculinos.\n");
	}
	if(contadorNoBinario>0)
	{
		printf("El promedio de notas de alumnos No Binarios es de %.2f.\n",promedioNoBinario);

	}



	printf("El legajo del alumno que rinde mas materias es: %d y tiene %d anos.\n",legajoMayorCursante,edadMasJoven);


	return 0;
}

//slack https://join.slack.com/t/laboratorioyp-8qi4110/shared_invite/zt-15ugvkvaa-f05EGnEWl~fw~UF4wIOZnw
