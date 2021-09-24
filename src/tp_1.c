/*
 ============================================================================
 Name        : tp_1.c
 Author      : Federico Viegas Palermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

int opcion;
int num1=0;
int num2=0;
int resuSuma;
int resuResta;
int resuMultiplicacion;
float resuDivision;
int resuFactorialNum1;
int resuFactorialNum2;
int flagOperandoUnoIngresado=0;
int flagOperandoDosIngresado=0;
int flagOperacionesOK=0;
int respuestaDivision;
int respuestaPrimerFactorial;
int respuestaSegundoFactorial;

setbuf(stdout,NULL);

do{

	printf ("Calculadora UTN\n");
	printf ("1-Ingrese el primer operando: %d\n",num1);
	printf ("2-Ingrese el segundo operando: %d\n",num2);
	printf ("3-Calcular todas las operaciones\n");
	printf ("4-Informar los resultados\n");
	printf ("5-Salir\n");

	scanf ("%d",&opcion);

	switch (opcion){
	case 1:
		if(getNumero(&num1,"Ingrese el primer operando","Numero invalido")==0)
		{
		flagOperandoUnoIngresado=1;
		}
		break;

	case 2:
		if (getNumero(&num2,"Ingrese el segundo operando","Numero invalido")==0)
		{
			flagOperandoDosIngresado=1;
		}
		break;

	case 3:
		if (flagOperandoUnoIngresado==1&& flagOperandoDosIngresado==1)
		{
			resuSuma=funcionSuma(num1,num2);
			resuResta=funcionResta(num1,num2);
			respuestaDivision=funcionDividir(&resuDivision,num1,num2);
			respuestaPrimerFactorial=funcionFactorial(num1,&resuFactorialNum1);
			respuestaSegundoFactorial=funcionFactorial(num2,&resuFactorialNum2);

		}
		else
		{
			printf("Error.Para realizar las operaciones, primero cargue los operandos\n");
	}
		flagOperacionesOK=1;
		break;

	case 4:
		if (flagOperacionesOK==0)
		{
			printf ("Error.Ingrese los operandos y la operacion que quiere realizar\n");
			break;
		}
			printf("El resultado de la suma es: %d\n",resuSuma);
			printf ("El resultado de la resta es: %d\n",resuResta);

			if (respuestaDivision==0)
			{
				printf ("El resultado de la division es: %f\n",resuDivision);

			}
			else
			{
				printf ("No se puede dividir por cero\n");
			}
			printf ("El resultado de la multiplicacion es: %d\n",resuMultiplicacion);

			if (respuestaPrimerFactorial==0)
			{
				printf ("El factorial del primer operando ingresado es: %d\n",resuFactorialNum1);
			}
			else
			{
				printf ("No se puede calcular factorial de negativos");
			}
			if (respuestaSegundoFactorial==0)
			{
				printf ("El factorial del segundo operando ingresado es: %d\n",resuFactorialNum2);
			}
			else
			{
				printf ("No se puede calcular factorial de negativos");
			}
		break;


	case 5:
		printf ("Hasta la proxima\n");
		break;

	default:
		printf("Opcion elegida no es valida. Ingrese una opcion entre 1 y 5\n");
		break;
	}
} while (opcion!=5);

	return EXIT_SUCCESS;
}


