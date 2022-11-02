#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define Preescolar 3
#define Primaria 6
#define Secundaria 11
#define Bachillerato 14
#define Universidad 17 
#define Trabajo 23
#define Muerte 90

void main() {
	int i = 0;
	printf("Teclea tu edad: ");
	scanf_s("%i", &i);
	if (i < Preescolar)
	{
		printf("\nProbablemente no estes estudiando\n\n");
	}
	else if (i < Primaria)
	{
		printf("\nEstas en Kinder\n\n");
	}
	else if (i < Secundaria) 
	{
		printf("\nEstas en Primaria\n\n");
	}
	else if (i < Bachillerato) 
	{
		printf("\nEstas en Secundaria\n\n");
	}
	else if (i < Universidad) 
	{
		printf("\nEstas en Bachillerato\n\n");
	}
	else if (i < Trabajo) 
	{
		printf("\nEstas en Universidad");
	}
	else if (i < Muerte) 
	{
		printf("\nEstas trabajando");
	}
	else 
	{
		printf("\nEstas Muerto");
	}
}