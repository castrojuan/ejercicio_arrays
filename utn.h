/*
 * UTN.H
 *
 *  Created on: 29 mar. 2021
 *      Author: juan martin
 */

#ifndef utn_h_
#define utn_h_
int utn_getNumero(int* pResultado,char* mensaje, char*mensajeError,int minimo,int maximo, int reintentos);
int utn_getFloat(float* pResultado,char* mensaje, char*mensajeError,float minimo,float maximo, int reintentos);
int utn_getChar(char* pResultado,char* mensaje, char*mensajeError,char minimo,char maximo, int reintentos);


#endif /* utn_h_ */
