#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define Lim 10

using namespace std;

void main()
{
	int Arr[Lim], Cont = 0;

	for (Cont = 0; Cont < Lim; Cont++)
	{
		Arr[Cont] = Cont + 1;
	}

	for (Cont = 0; Cont < Lim; Cont++)
	{
		printf("%i", Arr[Cont]);
		if (Cont < (Lim - 1))
		{
		printf(",");
		}
	}
}
