#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>


using namespace std;

void main() {
	char Car[] = { '0', '1', '*', '-', '+', 'o', 'O', '#', '.', '$', '¿', '/', '&', '%', '\\'};
	int m = 0, n = 0, a = 0, e = 0, temp = 0;
	printf("Ponle un valor: ");
	scanf_s("%i",&e);
	printf("\n");
	do {
		for (m = 0; m < e; m++) {
			printf("\t");
			for (n = 0; n <= a; n++) {
				printf("%c ", Car[rand()%(sizeof(Car)-1)]);
				//printf("%c ", Car[rand() % 2]);
				Sleep(41-(a/2));
			}
			//Sleep(20);
			printf("\n");
			a++;
		}
		for (m = 0; m < e; m++) {
			if (m == e - 1) {

			}
			else {
				printf("\t");
			}
			for (n = a - 2; n >= 0; n--) {
				printf("%c ", Car[rand() % (sizeof(Car) - 1)]);
				//printf("%c ", Car[rand() % 2]);
				Sleep(41-(a/2));
			}
			if(m == e-1){

			}else {
				//Sleep(20);
				printf("\n");
				
			}
			
			a--;
		}
		temp++;
	} while (temp < 7);
}