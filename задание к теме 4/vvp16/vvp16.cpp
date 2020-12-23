#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

void vvp1();
void vvp2();
void vvp3();
void vpp4();
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
	int a, b;
	int mass[10];

	scanf_s("%d", &a);

	mass[1] = 1;

	for (b = 2; b <= a; b++)
	{
		mass[b] = mass[b - 1] + 2;
	}

	for (b = 2; b <= a; b++)
	{
		printf_s("\n %i", mass[b]);
	}
}

void vvp2()
{
	int a, b, c, x;
	int mass[100];
	

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	mass[1] = b;

	for (x = 2; x <= a; x++) 
	{
		mass[x] = mass[x - 1] * c;
	}
	printf_s("\n Kol-vo chlenov progressii %i", a);

	for (x = 1; x <= a; x++)
	{
		printf_s("\n %i", mass[x]);
	}
}

void vvp3()
{
	int a, b, c, x;
	int mass[100];
	
	scanf_s("%d", &c);
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	mass[1] = a;
	mass[2] = b;
	mass[3] = a + b;

	for (x = 4; x <= c; x++)
	{
		mass[x] = mass[x - 1] * 2;
	}

	for (x = 1; x <= c; x++)
	{
		printf_s("\n %i", mass[x]);
	}
}

void vvp4()
{
	int a, b;
	int mass[100];
	
	scanf_s("%d", &a);
	
	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	for (b = 1; b <= (a / 2); b++)
	{
		printf_s("\n %i", mass[b]);
		printf_s("\n %i", mass[a - b + 1]);
	}

	if (a % 2 == 1)
	{
		printf_s("\n %i", mass[a / 2 + 1]);
	}
}

void vvp5()
{
	int a, b;
	int mass[100];

	
	scanf_s("%d", &a);
	;
	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	b = 1;

	while (b <= a)
	{
		printf_s("\n %i", mass[b]);
		b = b + 2;
	}

	a = a / 2;

	for (b = a; b >= 1; b--) 
	{
		printf_s("\n %i", mass[b * 2]);
	}
}
