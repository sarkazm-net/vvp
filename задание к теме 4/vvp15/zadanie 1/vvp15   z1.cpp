#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

void PowerA3(double A, double* B)
{
	*B = A * A * A;
}

int main()
{
	int z;
	for (z = 1; z <= 5; z++)
	{
		double A, B;

		scanf_s("%lf", &A);

		PowerA3(A, &B);

		printf_s("\n A v kube ravno %lf", B);
	}

	return 0;
}
