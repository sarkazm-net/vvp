#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");

	int i, c, shag;
	int A[] = { 3, 9, 6, 1, 8, 2, 7, 4, 5 };
	int n = sizeof(A) / sizeof(int);
	float k = 1.247;
	for (shag = n - 1; shag >= 1; shag /= k)
	{
		for (i = 0; i < n - shag; i++)
		{
			if (A[i] > A[i + shag])
			{
				c = A[i];
				A[i] = A[i + shag];
				A[i + shag] = c;
			}
		}
	}
	printf_s("Массив А:\n");
	for (i = 0; i < 9; i++)
	{
		printf_s(" %d ", A[i]);
	}
}
