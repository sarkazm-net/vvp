#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

void Quarter(int x, int y)
{
	if ((x > 0) && (y > 0)) {
		printf("\n Tochka v 1 ploskisti ");
	}
	else if ((x < 0) && (y > 0)) {
		printf("\n Tochka v 2 ploskisti ");
	}
	else if ((x < 0) && (y < 0)) {
		printf("\n Tochka v 3 ploskisti ");
	}
	else if ((x > 0) && (y < 0)) {
		printf("\n Tochka v 4 ploskisti ");
	}
}
int main()
{
	int x, y, z;

	for (z = 0; z <= 3; z++)
	{
		scanf_s("%d", &x);
		scanf_s("%d", &y);

		if ((x != 0) && (y != 0)) 
		{
			Quarter(x, y);
		}
		else 
		{
			printf_s("error");
		}


	}
	return 0;
}
