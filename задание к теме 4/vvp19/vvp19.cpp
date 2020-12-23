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
	int  a, b, c = 0;
	int mass[100], mass2[100];

	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	for (b = 1; b <= a; b++) 
	{
		if (mass[b] != mass[b + 1])
		{
			mass2[c++] = mass[b];
		}
	}

	for (b = 0; b < c; b++)
	{
		printf("\n %d %d", b + 1, mass2[b]);
	}
}

void vvp2()
{
	int  a, b, c, d, e, e1;
	int mass[100];
	
	scanf_s("%d", &a);

	for (b = 1; b <= a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	for (b = 1; b <= a; b++)
	{
		c = 0;
		for (d = 1; d <= a; d++)
		{
			if (mass[b] == mass[d])
			{
				c++;
			}
		}
		if (c == 2)
		{
			e = b - 1;
			e1 = mass[b];
			for (d = b; d <= a; d++)
				if (mass[d] != e1)
				{
					e++;
					mass[e] = mass[d];
				}
			a = e;
			b--;
		}
	}

	for (b = 1; b <= a; b++)
	{
		printf("\n %d", mass[b]);
	}
}

void vvp3()
{
	int  a, b, c, d;
	int mass[100];
	
	scanf_s("%d", &a);
	
	for (b = 0; b < a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	c = 0;
	d = 0;

	for (b = 0; b < a; b++)
	{
		if (mass[c] > mass[b])
		{
			c = b;
		}
		if (mass[d] < mass[b])
		{
			d = b;
		}
	}
	if (d > c)
	{
		d++;
	}

	a++;

	for (b = a - 1; b > c; b--)
	{
		mass[b] = mass[b - 1];
	}
	mass[c] = 0;

	a++;
	for (b = a - 1; b > d + 1; b--)
	{
		mass[b] = mass[b - 1];
	}
	mass[d + 1] = 0;

	for (b = 0; b < a; b++)
	{
		printf("\n %d %d", b + 1, mass[b]);
	}
}

void vvp4()
{
	int  a, b, c;
	int mass[100];

	scanf_s("%d", &a);

	for (b = 0; b < a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	c = 0;

	for (b = a - 1; b >= 0; b--)
	{
		if (mass[b] < 0) 
		{
			a++;
			for (c = a; c > b; c--) 
			{
				mass[c] = mass[c - 1];
			}
			mass[b + 1] = 0;
		}
	}

	for (b = 0; b < a; b++) 
	{
		printf("\n %d %d", b + 1, mass[b]);
	}

}

void vvp5()
{
	int  a, b, c;
	int mass[100];
	
	scanf_s("%d", &a);

	for (b = 0; b < a; b++)
	{
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	c = 0;

	for (b = a - 1; b >= 0; b--) 
	{
		if (mass[b] > 0) {
			a++;
			for (c = a - 1; c > b; c--)
			{
				mass[c] = mass[c - 1];
			}
			mass[b] = 0;
		}
	}

	for (b = 0; b < a; b++)
	{
		printf("\n %d %d", b + 1, mass[b]);
	}
}



