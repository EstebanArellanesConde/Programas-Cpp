#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void main() {
	
	char Nom[100];
	char NoC[10];
	int edad = 0;

	printf("Dame tu nombre: ");
	fflush(stdin);
	scanf("%[^\n*]s", &Nom);

	printf("Dame tu numero de cuenta: ");
	fflush(stdin);
	scanf("%[^\n*]s", &NoC);

	printf("Dame tu edad: ");
	fflush(stdin);
	scanf("%i", &edad);

	printf("\n\t%s tu numero de cuenta es %s y tu edad es %i\n\n", Nom, NoC, edad);
}