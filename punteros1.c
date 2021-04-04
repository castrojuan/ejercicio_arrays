/*
 ============================================================================
 Name        : punteros1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"



int main(void)
{

	setbuf(stdout,NULL);
   char nombre;
   int edad;
   //float promedio;
   //int peso;
   int respuesta;

   respuesta = utn_getChar(&nombre,"what´s your name?","this is not a name",'A','Z',3);

   if (respuesta==0)
   {
    printf("Nice to meet you %c",nombre);
   }




   respuesta= utn_getNumero(&edad,"\nwhat's your age?","not a valid age",10,99,3);
   if (respuesta==0)
      {
       printf("your age is %d",edad);
      }


	return EXIT_SUCCESS;
}

