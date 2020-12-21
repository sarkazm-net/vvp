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

void vvp1() {

	float x;
	double rad;
	double p = 3.14;

	scanf_s("%f", &x);

	rad = (x * p) / 180;

	printf("\n%lf", rad);

}

void vvp2() {

	float x;
	double grad;
	double p = 3.14;

	scanf_s("%f", &x);

	grad = (180 * x) / p;

	printf("\n%lf", grad);

}

void vvp3() {

	float x = 10, a = 100, y, zen1, zen2;

	scanf_s("%f", &y);

	zen1 = a / x;
	zen2 = zen1 * y;

	printf("\n%f,%f", zen1, zen2);
}

void vvp4()
{
	float v1, v2, s, t, res;

	scanf_s("%f", &v1);
	scanf_s("%f", &v2);
	scanf_s("%f", &s);
	scanf_s("%f", &t);

	res = s + (v1 * t) + (v2 * t);

	printf("\n%f", res);
}

void vvp5()
{
	float a, b, x;

	scanf_s("%f", &a);
	scanf_s("%f", &b);

	x = -b / a;

	printf("\n%f", x);
}

void vvp6() {

	float a1, a2, b1, b2;
	float  c1, c2, x, y, pob;

	scanf_s("%f", &a1);
	scanf_s("%f", &a2);
	scanf_s("%f", &b1);
	scanf_s("%f", &b2);
	scanf_s("%f", &c1);
	scanf_s("%f", &c2);

	pob = a1 * b2 - a2 * b1;

	x = (c1 * b2 - c2 * b1) / pob;
	y = (a1 * c2 - a2 * c1) / pob;

	printf("\n%f, %f", x, y);
}