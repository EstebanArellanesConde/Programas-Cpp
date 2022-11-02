#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int OperacionIFELSE(int A, int B, int X, int Y);
int OperacionSC(int A, int B, int X, int Y);

using namespace std;

void main(){
	int A = 0, B = 0, X = 0, Y = 0;

	/*while (Y != 5) {
		system("cls");
		 Y = OperacionIFELSE(A, B, X, Y);
		 printf("\n");
		 system("pause");
	}*/

	do {
		system("cls");
		Y = OperacionSC
		(A, B, X, Y);
		printf("\n");
		system("pause");
	} while (Y != 5);
}

int OperacionIFELSE(int A, int B, int X, int Y) {
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

	if (Y <= 4 && Y >= 1) {
		printf("Ingresa el tamaño del triangulo: ");
		scanf_s("%i", &X);
		printf("\n");

		if (Y == 1) {	//Parte Superior Derecha

			for (A = 1; A <= X; A++)
			{
				for (B = 1; B <= A; B++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
		else if (Y == 2) {	// Parte Superior Izquierda

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
		else if (Y == 3) {	//Parte Inferior Derecha

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
		else if (Y == 4) {	//Parte Inferior Izquierda

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
	}
	else if (Y == 5) {
		printf("Hasta pronto\n");
	}
	else {
		printf("Mongolo donde viste la opcion %d\n", Y);
	}
	return Y;
}

int OperacionSC(int A, int B, int X, int Y) {
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

	if (Y <= 4 && Y >= 1) {
		printf("Ingresa el tamaño del triangulo: ");
		scanf_s("%i", &X);
		printf("\n");

		switch (Y) {
		case 1:
			for (A = 1; A <= X; A++)
			{
				for (B = 1; B <= A; B++)
				{
					printf("*");
				}
				printf("\n");
			}
			break;

		case 2:
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
			break;

		case 3:
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
			break;

		case 4:
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
			break;
		}
	}
	else {
		switch (Y) {
		case 5:
			printf("Hasta pronto\n");
			break;

		default:
			printf("Mongolo donde viste la opcion %d\n", Y);
			break;
		}
	}
	return Y;
}