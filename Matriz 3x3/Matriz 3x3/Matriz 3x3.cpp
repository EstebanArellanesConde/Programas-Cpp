#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

	float Mat[4][4][4][4];
	printf("\n\n");
	/*float Res = 0;
	float Mat[4][4];
	//int Mat[4][4] = { {3, -3, 2, -5}, {4, 1, 7, 8}, {-2, 3, 6, 9}, {-1, 11, 10, -12} };

	printf("\tBienvenido .v vamos a resolver una matriz de 4x4\n\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("Ingresa el valor [%i][%i] de la matriz:", i+1, j+1);
			scanf_s("%f", &Mat[i][j]);
			//printf("%i   ", Mat[i][j]);
		}
		printf("\n");
	}	Res = (Mat[0][0] * Mat[1][1] * Mat[2][2] * Mat[3][3]) + 
		  (Mat[0][1] * Mat[1][2] * Mat[2][3] * Mat[3][0]) + 
		  (Mat[0][2] * Mat[1][3] * Mat[2][0] * Mat[3][1]) +
		  (Mat[0][3] * Mat[1][0] * Mat[2][1] * Mat[3][2]) -
		  (Mat[3][0] * Mat[2][1] * Mat[1][2] * Mat[0][3]) -
		  (Mat[3][1] * Mat[2][2] * Mat[1][3] * Mat[0][0]) -
		  (Mat[3][2] * Mat[2][3] * Mat[1][0] * Mat[0][1]) -
		  (Mat[3][3] * Mat[2][0] * Mat[1][1] * Mat[0][2]);
	printf("\n\nDeterminante de la matriz: %0.2f\n\n", Res);
	*/
	system("pause");
	return 0;
}