#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

int Fact2(int N)
{
	int x, y;

	if (N % 2 == 0)
	{
		x = 1;
		y = 2;
		while (N > 0) {
			x = x * y;
			y = y + 2;
			N = N - 2;
		}
		return x;
	}
	else
	{
		x = 1;
		y = 1;
		while (N > 0) {
			x = x * y;
			y = y + 2;
			N = N - 2;
		}
		return x;
	}
}

int main()
{
	int N;

	scanf_s("%d", &N);

	if (N > 0) 
	{
		printf_s("\n %d", Fact2(N));
	}
	else 
	{
		printf_s("error");
	}
	return 0;
}
