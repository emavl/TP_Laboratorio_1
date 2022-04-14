/*
 * Calcular_costos.c
 *
 * -------- Funciones papeeeee "! ------
 */
#include <stdio.h>
#include <stdlib.h>
//________________________Pide un numero entero__________________________
int numeroEntero(int numero)
{

	scanf("%d",&numero);

	return numero;

}
//________________________Piede un numero flotante________________________
float numeroFlotante(float numero)
{
	scanf("%f",&numero);

	return numero;
}

//____________________________DEBITO____________________________
float debito(float tarjeta) // parametros formales
{
	float precioFinal;

	precioFinal= tarjeta*0.90;

	return precioFinal;
}
//____________________________CREDITO_____________________________
float credito(float tarjeta)
{
	float precioFinal;

	precioFinal=tarjeta*1.25;

	return precioFinal;
}
//____________________________BITCOIN_______________________________
float bitcoin(float coin)
{
	float precioFinal;

	precioFinal=coin/4741085.69;

	return precioFinal;
}
//____________________________Precio*Km_____________________________
float PrecioKm(float kilometros,float precioUni)
{
	float precioFinal;

	precioFinal= precioUni/kilometros;

	return precioFinal;
}
//____________________________Diferencia_____________________________
float diferencia(float precioLatam,float precioAerolineas)
{
	float diferencia;

	if(precioLatam<precioAerolineas)
	{
		diferencia=precioAerolineas - precioLatam;
	}
	else
	{
		diferencia=precioLatam-precioAerolineas;
	}

	return diferencia;
}















