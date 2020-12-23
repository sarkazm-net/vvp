#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

void vvp1();
void vvp2();
void vvp3();
void vvp4();
void vvp5();

int main()
{
	vvp1();
	vvp2();
	vvp3();
	vvp4();
	vvp5();
}

void vvp1()
{
	double x, y;

	scanf_s("%lf", &x);

	for (y = 0; y < 10; y++)
	{
		printf_s("\n %lf", y / (10 * x));
	}
}

void vvp2()
{
	double x, y, N;

	scanf_s("%lf", &N);

	x = 1;

	for (y = 1; y <= N; y++)
	{
		x = x * (1 + 0.1 * y);
	}
	printf_s("\n %lf", x);
}

void vvp3()
{
	double x, y, N;
	
	scanf_s("%lf", &N);

	x = 0;

	for (y = 1; y <= N; y++) 
	{
		x = x + (2 * y - 1);
	}
	printf_s("\n %lf", x);
}

void vvp4()
{
	double x, x1, y, N, A;

	scanf_s("%lf", &N);
	scanf_s("%lf", &A);

	x = 1;
	x1 = 1;

	for (y = 1; y <= N; y++)
	{
		x1 = x1 * A;
		x = x + x1;
	}
	printf_s("\n %lf", x);
}

void vvp5()
{
	double x, x1, y, N, A;

	scanf_s("%lf", &N);
	scanf_s("%lf", &A);

	x = 1;
	x1 = 1;

	for (y = 1; y <= N; y++)
	{
		x1 = x1 * A * (-1);
		x = x + x1;
	}
	printf_s("\n %lf", x);
}

