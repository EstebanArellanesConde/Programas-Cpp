#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void main()
{
	int A = 0, B = 0, X = 0, Y = 0;

	printf("1.- Parte Superior Derecha");
	printf("\n");
	printf("2.- Parte Superior Izquierda");
	printf("\n");
	printf("3.- Parte Inferior Derecha");
	printf("\n");
	printf("4.- Parte Inferior Izquierda");
	printf("\n");
	printf("5.- SALIR");
	printf("\n");

	printf("Opcion: ");
	scanf_s("%i", &Y);
	printf("\n");

	if (Y == 1)
	{	//Parte Superior Derecha

		printf("Ingresa el tamaño del triangulo: ");
		scanf_s("%i", &X);
		printf("\n");

		for (A = 1; A <= X; A++)
		{
			for (B = 1; B <= A; B++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		if (Y == 2)
		{	// Parte Superior Izquierda

			printf("Ingresa el tamaño del triangulo: ");
			scanf_s("%i", &X);
			printf("\n");

			for (B = 1; B <= X; B++)
			{
				for (A = 1; A <= X; A++)
				{
					if (A > (X - B))
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
		}
		else
		{
			if (Y == 3)
			{
				//Parte Inferior Derecha

				printf("Ingresa el tamaño del triangulo: ");
				scanf_s("%i", &X);
				printf("\n");

				for (B = 0; B <= X; B++)
				{
					for (A = 0; A <= X; A++)
					{
						if (A > (X - B))
						{
							printf(" ");
						}
						else
						{
							printf("*");
						}
					}
					printf("\n");
				}
			}
			else
			{
				if (Y == 4)
				{
					//Parte Inferior Izquierda

					printf("Ingresa el tamaño del triangulo: ");
					scanf_s("%i", &X);
					printf("\n");

					for (B = 1; B <= X; B++)
					{
						for (A = 1; A <= X; A++)
						{
							if (A > (B - 1))
							{
								printf("*");
							}
							else
							{
								printf(" ");
							}
						}
						printf("\n");
					}

				}
				else
				{
					if (Y == 5)
					{
						printf("\n");
					}
				}
			}
		}
	}
}


