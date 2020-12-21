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

void vvp1() {

   div_t kb;
   int b;

   scanf_s("%d", &b);

   kb = div(b, 1024);
   printf("%d", kb.quot);
}

void vvp2()
{
	
	
	div_t res;
	int a, b;

	scanf_s("%d %d", &a, &b);

	res = div(a, b); 
	printf("%d", res.quot);

}

void vvp3()
{

	div_t res;
	int a, b;

	scanf_s("%d %d", &a, &b);

	res = div(a, b);
	printf("%d\n", res.rem);

}

void vvp4()
{
	int a;
	std::cin >> a;
	std::cout << a / 10 + (a % 10) * 10 << std::endl;
	
}

void vvp5()
{
	int d, c;
	int b, a;
	int z;
	
	scanf_s("%d", &a);

	b = a % 100;
	z = a - b;
	c = z / 100;
	d = b * 10 + c;

	printf("\nd=%d\t", d);
}

