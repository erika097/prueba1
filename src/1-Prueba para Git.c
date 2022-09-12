/*
 ============================================================================
 Name        : 1-Prueba.c
 Author      : Erika Alcon Div 1J
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	printf("ingrese un numero");
	scanf("%d", &numero);

	printf("El numero que ingresaste es %d", numero);

	return EXIT_SUCCESS;
}
