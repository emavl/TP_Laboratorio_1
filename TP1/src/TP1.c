/*
 ============================================================================
 Name        : TrabajoPractico_1.c
 Author      : Emanuel vidal - Divicion D.
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Calcular_Costos.h"


int main(void) {
	setbuf(stdout,NULL);

	int opcion;
  float kilometros;
  float precioAerolineas;
  float precioLatam;
  float debitoA;
  float debitoL;
  float creditoA;
  float creditoL;
  float bitcoinA;
  float bitcoinL;
  float precioUnitarioA;
  float precioUnitarioL;
  float diferenciaPrecio;

  do
  {
	opcion = ejecutaMenu(opcion);

	switch(opcion)
	{
		case 1:  // funciona
			printf("\nIngrese los kilometros por favor:");
			kilometros = numeroFlotante(kilometros);
			while(kilometros <= 0)
			{
				printf("\nError !!!\nIngrese el valor correcto");
				kilometros = numeroFlotante(kilometros);
			}
			break;
	    case 2: // funiona

	    	printf("\nIngrese el precio de Aerolíneas Argentinas: ");
			precioAerolineas = numeroFlotante(precioAerolineas);

			while(precioAerolineas <= 0)
			{
				printf("\n    Error !!!    Ingrese el valor correcto por favor");
				precioAerolineas = numeroFlotante(precioAerolineas);
			}

			printf("\nIngrese el precio de la Aerolinea Latam: ");
			precioLatam = numeroFlotante(precioLatam);

			while(precioLatam <= 0)
				{
					printf("\nError !!!\nIngrese el valor correcto");
					precioLatam = numeroFlotante(precioLatam);
				}
			break;
	    case 3: // funciona
	    	if(kilometros != 0 && precioAerolineas !=0 && precioLatam !=0)
	    	{
	    		debitoA = debito(precioAerolineas);
	    		debitoL = debito(precioLatam);

	    		creditoA = credito(precioAerolineas);
	    		creditoL = credito(precioLatam);

	    		bitcoinA = bitcoin(precioAerolineas);
				bitcoinL = bitcoin(precioLatam);

				precioUnitarioA = PrecioKm(kilometros,precioAerolineas);
				precioUnitarioL = PrecioKm(kilometros,precioLatam);

				diferenciaPrecio = diferencia(precioLatam,precioAerolineas);

	    	}
	    	else
	    	{
	    		printf("\nDebe ingresar los valores para poder calcular los costos\n");
	    	}


				break;
	    case 4: // funciona
	    	 printf("\nLatam:\n"
	    			"\na) Precio con tarjeta de Debito es:$ %.2f"
	    			"\nb) Precio con tarjeta de Credito es:$ %.2f"
	    			"\nc) Precio pagando con Bitcoin es:$ %.4f"
	    			"\nd) Precio unitario es:$ %.2f\n"
	    			"\nAerolineas Argentinas:\n"
	    			"\na) Precio con tarjeta de Debito es:$ %.2f"
					"\nb) Precio con tarjeta de Credito es:$ %.2f"
					"\nc) Precio pagando con Bitcoin es:$ %.4f"
	    			"\nd) Precio unitario es:$ %.2f"
					"\nLa diferencia de precio es:$ %2.f\n"
	    			,debitoL,creditoL,bitcoinL,precioUnitarioL,debitoA,creditoA,bitcoinA,precioUnitarioA,diferenciaPrecio);
	    	break;
	    case 5:

	    	kilometros = 7090;
	    	precioAerolineas = 1335000.66;
	    	precioLatam = 1350000.76;

	    	debitoA = debito(precioAerolineas);
			debitoL = debito(precioLatam);

			creditoA = credito(precioAerolineas);
			creditoL = credito(precioLatam);

			bitcoinA = bitcoin(precioAerolineas);
			bitcoinL = bitcoin(precioLatam);

			precioUnitarioA = PrecioKm(kilometros,precioAerolineas);
			precioUnitarioL = PrecioKm(kilometros,precioLatam);

			diferenciaPrecio = diferencia(precioLatam,precioAerolineas);

	    	printf("\nLatam:\n"
					"\na) Precio con tarjeta de Debito es:$ %.2f"
					"\nb) Precio con tarjeta de Credito es:$ %.2f"
					"\nc) Precio pagando con Bitcoin es:$ %.4f"
					"\nd) Precio unitario es:$ %.2f\n"
					"\nAerolineas Argentinas:\n"
					"\na) Precio con tarjeta de Debito es:$ %.2f"
					"\nb) Precio con tarjeta de Credito es:$ %.2f"
					"\nc) Precio pagando con Bitcoin es:$ %.4f"
					"\nd) Precio unitario es:$ %.2f"
					"\nLa diferencia de precio es:$ %2.f\n"
					,debitoL,creditoL,bitcoinL,precioUnitarioL,debitoA,creditoA,bitcoinA,precioUnitarioA,diferenciaPrecio);
           break;
	    case 6:
	    	printf("\nGracias por utilizar nuestros servicios !!!");
	    break;
	    default: printf("\nLa opcion no es valida\n");

	}

  }while(opcion!=6);


	return EXIT_SUCCESS;
}



