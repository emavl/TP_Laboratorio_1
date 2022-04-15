/*
 * Calcular_Costos.h
 *
 *  Created on: 10 abr. 2022
 *      Author: USUARIO
 */

#ifndef CALCULAR_COSTOS_H_
#define CALCULAR_COSTOS_H_


//		___________________ Protipos__________________________.
  int ejecutaMenu(int numero);
  int numeroEntero(int numero);     // pide un numero
float numeroFlotante(float numero); // pide un numero flotante.
float debito(float tarjeta);        // cobro con debito.
float credito(float tarjeta);       // cobro con credito.
float bitcoin(float coin);          // cobro con bitcoin.
float PrecioKm(float kilometros,float precioUni); // Precio por kilometro
float diferencia(float precioLatam,float precioAerolineas); // Diferencia de Precios $$$
#endif /* CALCULAR_COSTOS_H_ */
