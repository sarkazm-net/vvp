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
void vvp6();

int main()
{
	vvp1();
	vvp2();
	vvp3();
	vvp4();
	vvp5();
	vvp6();
}

void vvp1()

{
	double x, x1, y, y1, B, A;

	scanf_s("%lf", &A);
	scanf_s("%lf", &B);

	if (A < B) {
		for (y = 1; y <= A; y++)
		{
			y1 = A;
			printf_s("\n znachenie ravno %lf", y1);
		}
		for (x = B; x >= 1; x--)
		{
			x1 = B;
			printf_s("\n znachenie ravno %lf", x1);
		}
	}
	else
		printf_s("\n error");
}

void vvp2()
{
	double  B, A;
	
	scanf_s("%lf", &A);
	scanf_s("%lf", &B);

	while ((A - B) >= 0)
	{
		A = A - B;
	}

	printf_s("\n znachenie A %lf", A);

}

void vvp3()
{
	double  N, K, x;
	
	scanf_s("%lf", &N);

	K = 0;
	x = 0;

	while (x < N)
	{
		K = K + 1;
		x = K + x;
	}

	printf_s("\n K ravno %lf", K);
	printf_s("\n x ravno %lf", x);
}

void vvp4()
{
		double  P, S, K;
		
		scanf_s("%lf", &P);

		K = 0;
		S = 1000;

		while (S <= 1100) 
		{
			S = S * (P / 100 + 1);
			K = K + 1;
		}

		printf_s("\n meciac %lf", K);
		printf_s("\n vklad %lf\n", S);

}

void vvp5()
{
	int  A, B;

	scanf_s("%d", &A);
	scanf_s("%d", &B);

	while ((A != 0) and (B != 0))
	{
		if (A > B) {
			A = A % B;
		}
		else
			B = B % A;
	}

	printf_s("\n NOD %d", A + B);
}

void vvp6()
{
	int   N, F, F1, F2, K;
	
	scanf_s("%d", &N);

	F1 = 1;
	F2 = 1;
	K = 2;
	F = 0;

	while (F < N) 
	{
		K = K + 1;
		F = F2 + F1;
		F2 = F1;
		F1 = F;
	}

	printf_s("\n K ravno %d", K);
}






