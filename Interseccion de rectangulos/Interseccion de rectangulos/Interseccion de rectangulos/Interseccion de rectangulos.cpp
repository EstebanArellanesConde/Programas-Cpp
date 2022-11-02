#include "pch.h""
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void main() 
{
	int A, B, C, D;

	printf("Teclea la posicion en 'X' de una esquina del primer rectangulo: ");
	scanf_s("%i",&A);
	printf("\n");

	printf("Teclea la poscion en 'Y' de una esquina del primer rectangulo: ");
	scanf_s("%i",&B);
	printf("\n");

	printf("Teclea la posicion en 'X' de una esquina del segundo rectangulo: ");
	scanf_s("%i",&C);
	printf("\n");

	printf("Teclea la poscion en 'Y' de una esquina del segundo rectangulo: ");
	scanf_s("%i",&D);
	printf("\n");

	if ((C || D) <= (A && B))
	{
		printf("Los rectangulos se intersectan");
		printf("\n");
	}
	else
	{
	printf("Los rectangulos no se intersectan");
	printf("\n");
	}
			
}

