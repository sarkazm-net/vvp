#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

int Sign(double X)
{
	if (X < 0)
	{
		return -1;
	}
	if (X == 0) 
	{
		return 0;
	}
	if (X > 0)
	{
		return 1;
	}
}
int main()
{
	
	double A, B;
	
	scanf_s("%lf", &A);
	scanf_s("%lf", &B);

	printf_s("\n Znachenie ravno %d", (Sign(A) + Sign(B)));

	return 0;
}