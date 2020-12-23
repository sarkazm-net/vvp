#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

double RingS(double R1, double R2)
{
	return pow(R1, 2) * 3.14 - pow(R2, 2) * 3.14;
}
int main()
{
	double R1, R2, z;

	for (z = 0; z < 3; z++)
	{

		scanf_s("%lf", &R1);
		scanf_s("%lf", &R2);

		if (R1 > R2)
		{
			printf_s("\n S kolca ravna %lf", RingS(R1, R2));
		}
		else
		{
			printf_s("error");
		}
	}
	return 0;
}