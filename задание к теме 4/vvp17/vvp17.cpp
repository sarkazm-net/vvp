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
	int  a, b, c, d, x;
	int mass[100];

	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	
	scanf_s("%d", &c);
	scanf_s("%d", &d);

	x = 0;

	for (b = c; b <= d; b++)
	{
		x = x + mass[b];
	}

	printf_s("\n %d", x / (d - c + 1));
}

void vvp2()
{
	int  a, b, c;
	int mass[100];

	scanf_s("%d", &a);
	
	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	c = mass[2] - mass[1];
	b = 2;

	while ((mass[b] - mass[b - 1]) == c)
	{
		b = b + 1;
	}

	if (b == a + 1) 
	{
		printf_s("\n Arephmetichskaia progressia %d", c);
	}
	else
		printf_s("\n Ne arephmetichskaia progressia");
}

void vvp3()
{
	int  a, b, c, d;
	int mass[100];

	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	a = a / 2;
	c = mass[2];
	d = 2;

	for (b = 2; b <= a; b++)
	{
		if (mass[2 * b] < c)
		{
			c = mass[2 * b];
			d = 2 * b;
		}
	}

	printf_s("\n Min element %d", c);
}

void vvp4()
{
	int  a, b, c;
	int mass[100];
	
	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	c = 0;

	for (b = 1; b <= a; b++)
	{
		if (b == 1)
		{
			if (mass[1] > mass[2])
			{
				c = 1;
			}
		}
		else if (b == a)
		{
			if (mass[a] > mass[a - 1])
			{
				c = a;
			}
		}
		else if ((mass[b] > mass[b - 1]) && (mass[b] > mass[b + 1])) 
		{
			c = b;
		}

	}

	if (c > 0) 
	{
		printf_s("\n Nomer localnogo max %d", c);
	}
	else
		printf_s("Localnogo max net");
}

void vvp5()
{
	int  a, b, c;
	int mass[100];

	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= a; c++)
		{
			if ((mass[b] == mass[c]) && (b != c) && (b < c))
			{
				printf("\n Nomera odinakovih elementov %d %d", b, c);
			}
		}
	}

}
