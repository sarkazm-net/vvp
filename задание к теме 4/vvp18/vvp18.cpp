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
	int  a, b, c;
	int mass[100], mass2[100];
	
	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	for (b = 1; b <= a; b++)
	{
		printf("mass2[%d] = ", b);
		scanf_s("%d", &mass2[b]);
	}

	for (b = 1; b <= a; b++)
	{
		mass[b] = mass[b] + mass2[b];
		mass2[b] = mass[b] - mass2[b];
		mass[b] = mass[b] - mass2[b];
	}

	for (b = 1; b <= a; b++)
	{
		printf("\n Pervi izmenennii massiv %d", mass[b]);
	}

	for (b = 1; b <= a; b++) {
		printf("\n Vtoroi izmenennii massiv %d", mass2[b]);
	}
}

void vvp2()
{
	int  a, b, c;
	double mass[100], mass2[100];
	
	
	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%lf", &mass[b]);
	}

	for (b = 1; b <= a; b++)
	{
		mass2[b] = 0;
	}

	for (b = 1; b <= a; b++)
	{
		for (c = b; c <= a; c++)
		{
			mass2[b] = mass2[b] + mass[c];
		}
	}

	for (b = 1; b <= a; b++)
	{
		printf("\n Vtoroi massiv %lf", mass2[b]);
	}
}

void vvp3()
{
	int  a, b, c = 0;
	int mass[100];
	
	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	for (b = 1; b <= a; b++)
	{
		if (mass[b] % 2 != 0)
		{
			c = mass[b];
		}
	}

	if (c > 0)
	{
		for (b = 1; b <= a; b++)
		{
			if (mass[b] % 2 != 0)
			{
				mass[b] = mass[b] + c;
			}
		}
	}

	for (b = 1; b <= a; b++)
	{
		printf("\n massiv %d", mass[b]);
	}
}

void vvp4()
{
	int  a, b, x, y;
	int mass[100];
	
	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	x = 1;

	for (b = 1; b <= a; b++) 
	{
		if (mass[x] < mass[b])
		{
			x = b;
		}
	}

	y = x;

	for (b = 1; b <= a; b++) 
	{
		if (mass[y] > mass[b]) 
		{
			y = b;
		}
	}

	if (x > y)
	{
		for (b = y + 1; b <= x - 1; b++) 
		{
			mass[b] = 0;
		}
	}
	else
		for (b = x + 1; b <= y - 1; b++)
		{
			mass[b] = 0;
		}

	for (b = 1; b <= a; b++) 
	{
		printf("\n massiv %d", mass[b]);
	}
}

void vvp5()
{
	int  a, b, c, x;
	int mass[100];

	scanf_s("%d", &a);

	for (b = 1; b <= a; b++) 
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	x = 0;

	for (b = 1; b < a; b++)
	{
		if (mass[b] > mass[b + 1])
		{
			x = mass[b + 1];
			mass[b + 1] = mass[b];
			mass[b] = x;
		}
	}

	for (b = 1; b <= a; b++)
	{
		printf("\n %d", mass[b]);
	}
}

