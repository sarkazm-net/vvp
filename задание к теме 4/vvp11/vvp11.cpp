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
	int A, B;

	scanf_s("%d", &A);
	scanf_s("%d", &B);

	if (A > B)
	{
		B = A;
	}
	else if (A < B)
	{
		A = B;
	}
	else
	{
		A = 0;
		B = 0;
	}
	printf_s("\n А: %d", A);
	printf_s("\n В: %d", B);
}

void vvp2()
{
	int x, y, z;

	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);

	if ((x <= y) && (x <= z)) 
	{
		printf_s("\n %d", y + z);
	}
	else if ((y <= x) && (y <= z))
	{
		printf_s("\n %d", x + z);
	}
	else if ((z <= x) && (z <= y)) 
	{
		printf_s("\n %d", x + y);
	}
}

void vvp3()
{
	double A, B, C;

	scanf_s("%lf", &A);
	scanf_s("%lf", &B);
	scanf_s("%lf", &C);

	if ((fabs(A - B)) < fabs(A - C)) 
	{
		printf_s("\n %lf", fabs(A - B));
	}
	else 
	{
		printf_s("\n %lf", fabs(A - C));
	}
}

void vvp4()
{
	double x, y;

	scanf_s("%lf", &x);
	scanf_s("%lf", &y);

	if ((x > 0) && (y > 0))
	{
		printf_s("\n 1 chetvert");
	}
	else if ((x < 0) && (y > 0))
	{
		printf_s("\n 2 chetvert");
	}
	else if ((x < 0) && (y < 0))
	{
		printf_s("\n 3 chetvert");
	}
	else if ((x > 0) && (y < 0)) 
	{
		printf_s("\n 4 chetvert");
	}
}

void vvp5()
{
	int x;

	scanf_s("%d", &x);

	if (x == 0)
	{
		printf(" 0 ");
	}
	else if ((x > 0) && (x % 2 == 0)) 
	{
		printf("\n polojitelnoe i chetnoe");
	}
	else if ((x > 0) && (x % 2 != 0)) 
	{
		printf("\n polojitelnoe i nechetnoe");
	}
	else if ((x < 0) && (x % 2 != 0))
	{
		printf("\n otrizatelnoe i nechetnoe");
	}
	else if ((x < 0) && (x % 2 == 0)) 
	{
		printf("\n otrizatelnoe i chetnoe");
	}
}

void vvp6()
{
	int x;

	scanf_s("%d", &x);

	if ((x > 0) && (x < 10) && (x % 2 != 0))
	{
		printf("\n odnoznachnoe i nechetnoe");
	}
	else if ((x > 0) && (x < 10) && (x % 2 == 0)) 
	{
		printf("\n odnoznachnoe i chetnoe");
	}
	else if ((x > 9) && (x < 100) && (x % 2 != 0))
	{
		printf("\n dvuznachnoe i nechetnoe");
	}
	else if ((x > 9) && (x < 100) && (x % 2 == 0))
	{
		printf("\n dvuznachnoe i chetnoe");
	}
	else if ((x < 1000) && (x > 99) && (x % 2 != 0))
	{
		printf("\n trehznachnoe i nechetnoe");
	}
	else if ((x < 1000) && (x > 99) && (x % 2 == 0))
	{
		printf("\n trehznachnoe i chetnoe");
	}
}


