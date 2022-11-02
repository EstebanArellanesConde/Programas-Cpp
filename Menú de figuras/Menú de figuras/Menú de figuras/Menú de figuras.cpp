#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void main()
{
	int Y = 0, A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0;

	printf("\n1.- Parte Superior Derecha");
	printf("\n2.- Parte Superior Izquierda");
	printf("\n3.- Parte Inferior Derecha");
	printf("\n4.- Parte Inferior Izquierda");
	printf("\n5.- Triangulo Superior");
	printf("\n6.- Triangulo Derecho");
	printf("\n7.- Triangulo Inferior");
	printf("\n8.- Triangulo Izquierdo");
	printf("\n9.- Rombo #1");
	printf("\n10.- Rombo #2");
	printf("\n11.- SALIR");

	printf("\n\nOpcion: ");
	scanf_s("%i", &Y);
	printf("\n");

	if (Y >= 1 && Y <= 10) {
		printf("Ingresa las medidas: ");
		scanf_s("%i", &C);
		printf("\n");
	}

	switch (Y)
	{
	case 1:
		//Parte Superior Derecha
		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= A; B++)
			{
				printf("* ");
			}
			printf("\n");
		}

	break;
	case 2:
		//Parte Superior Izquierda

		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= C; B++)
			{
				if (B > (C - A))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}

	break;
	case 3:
		//Parte Inferior Derecha 
		
		(E = C);
		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= C; B++)
			{
				if (B < (E + 1))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
			(E--);
		}

	break;
	case 4:
		//Parte Inferior Izquierda

		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= C; B++)
			{
				if (B >= A)
				{
					printf("* ");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}

	break;
	case 5:

		//Triangulo Superior

		(D = C);
		(E = (C + 1));

		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= (C * 2); B++) 
			{
				if (B >= D && B <= E)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
			D--;
			E++;
		}

	break;
	case 6:

		//Triangulo Derecho

		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= A; B++)
			{
				printf("* ");
			}
			printf("\n");
		}

		(C++);
		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= C; B++)
			{
				if (B > (C - A))
				{
					printf(" ");
				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		}

	break;
	case 7:

		//Triangulo Inferior
		
		E = (C * 2);
		D = 0;
		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= E; B++)
			{
				if (B > D && B <= (E + 1))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
			(E--);
			(D++);
		}

	break;
	case 8:

		//Triangulo Izquierdo

		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= C; B++)
			{
				if (B > (C - A))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}

		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= C; B++)
			{
				if (B >= (A))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}

	break;
	case 9:

		//Rombo 1

		(D = C);
		(E = (C + 1));

		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= (C * 2); B++)
			{
				if (B >= D && B <= E)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
			D--;
			E++;
		}

		E = (C * 2);
		D = 0;
		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= E; B++)
			{
				if (B > D && B <= (E + 1))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
			(E--);
			(D++);
		}
	break;
	case 10:

		//Rombo 2

		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= C; B++)
			{
				if (B > (C - A))
				{
					printf("* ");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}

		for (A = 1; A <= C; A++)
		{
			for (B = 1; B <= C; B++)
			{
				if (B >= A)
				{
					printf("* ");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}

	break;
	default:
		printf("Eso no es posible...");
	break;
	}
}