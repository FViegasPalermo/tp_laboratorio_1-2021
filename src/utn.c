/*
 * utn.c
 *
 *  Created on: 22 sep. 2021
 *      Author: usuario
 */

#include <stdio.h>
#include <stdlib.h>


//brief: Pide un numero al usuario y se lo pasa mediante un puntero al main.
//param: Numero ingresado.
//param: Mensaje al usuario para ingresar el numero
//param: Mensaje al usuario en caso de ingresar algo erroneo.
//return: retorno


int getNumero(int* pNumeroIngresado, char* mensaje, char* mensajeError)
{
	int bufferInt;
	int retorno=-1;

	if(pNumeroIngresado != NULL && mensaje != NULL && mensajeError != NULL)
	{
		printf("%s",mensaje);
		scanf("%d", &bufferInt);
		*pNumeroIngresado=bufferInt;
		retorno = 0;
	}
	return retorno;
}


//brief: Funcion que se encarga de sumar dos valores
//param: Primer numero ingresado.
//param: Segundo numero ingresado.
//return: resultado.


int funcionSuma (int operador1,int operador2)
{int resultado;
resultado= operador1+operador2;

return resultado;
}


//brief: Funcion que se encarga de restar dos valores.
//param: Primer numero ingresado.
//param: Segundo numero ingresado.
//return: resultado.

int funcionResta (int operador1,int operador2)
{int resultado;
resultado= operador1-operador2;

return resultado;
}

//brief: Funcion que se encarga de dividir dos valores
//param: Puntero de Resultado.
//param: Primer numero ingresado.
//param: Segundo numero ingresado.
//return: retorno

int funcionDividir (float*pResultado,int operador1,int operador2)
{float resultado;
	int retorno=-1;
	if (pResultado!=NULL&&operador2!=0)
	{
		resultado=(float)operador1/operador2;
		*pResultado=resultado;
		retorno=0;
	}

return retorno;
}


//brief: Funcion que se encarga de multiplicar dos valores
//param: Primer numero ingresado.
//param: Segundo numero ingresado.
//return: resultado.

int funcionMultiplicacion (int operador1,int operador2)
{int resultado;
resultado= operador1*operador2;

return resultado;
}


//brief: Funcion que se encarga de factorizar un numero
//param: Numero ingresado
//param: Puntero de Resultado
//return: estado factorial

int funcionFactorial(int num1, int* pResultadoFactorial)
{
	int estadoFactorial=-1;
	int factorialParcial=1;
	int i;

	num1=(int)num1;

	if (num1>0)
	{
		for(i=num1;i>0;i--)
		{
			factorialParcial=factorialParcial*i;
		}
		*pResultadoFactorial=factorialParcial;
		estadoFactorial=0;
	}
	else
	{
		if(num1==0)
		{
		*pResultadoFactorial=1;
		estadoFactorial=0;
		}
	}
	return estadoFactorial;
}


