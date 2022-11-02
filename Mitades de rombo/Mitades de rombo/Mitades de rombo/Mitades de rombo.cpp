#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void Ejemplo();

using namespace std;

void main()
{
	int A = 0, B = 0, X = 0, Y = 0, V = 0;

	printf("1.- Parte Superior Derecha");
	printf("\n");
	printf("2.- Parte Superior Izquierda");
	printf("\n");
	printf("3.- Parte Inferior Derecha");
	printf("\n");
	printf("4.- Parte Inferior Izquierda");
	printf("\n");
	printf("5.- Triangulo Superior");
	printf("\n");
	printf("6.- Triangulo Derecho");
	printf("\n");
	printf("7.- Triangulo Inferior");
	printf("\n");
	printf("8.- Triangulo Izquierdo");
	printf("\n");
	printf("9.- Rombo");
	printf("\n");
	printf("10.- SALIR");
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

				V = X;
				for (B = 1; B <= V; B++)
				{
					for (A = 1; A <= X; A++)
					{
						printf("* ");
					}
					X--;
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
						

					}
					else
					{
						if (Y == 6)
						{
							//Triangulo Isósceles Derecho 

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
							if (Y == 7)
							{

							}
							else
							{
								if (Y == 8)
								{
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
									if (Y == 9)
									{

									}
									else
									{
										if (Y == 10)
										{
											printf("\n");
										}
										else
										{
											printf("Eso no es valido.");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


void Ejemplo() {
	int Y = 0;
	printf("\n1.- Parte Superior Derecha");
	printf("\n2.- Parte Superior Izquierda");
	printf("\n3.- Parte Inferior Derecha");
	printf("\n4.- Parte Inferior Izquierda");
	printf("\n5.- Triangulo Superior");
	printf("\n6.- Triangulo Derecho");
	printf("\n7.- Triangulo Inferior");
	printf("\n8.- Triangulo Izquierdo");
	printf("\n9.- Rombo");
	printf("\n10.- SALIR");
	printf("\nOpcion: ");
	scanf_s("%i", &Y);
	printf("\n");

	switch (Y) {
	case 1:
		printf("\nRealizar 1");
	break;
	case 2:
		printf("\nRealizar 2");
	break;
	default:
		printf("\nEsteban");
	break;
	}
}