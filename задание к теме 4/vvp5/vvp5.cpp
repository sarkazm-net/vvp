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

	float x1, x2, y1, y2, h1, h2;

	scanf_s("%f", &x1);
	scanf_s("%f", &x2);
	scanf_s("%f", &y1);
	scanf_s("%f", &y2);

	h1 = y1 - x1;
	h2 = y2 - x2;

	printf("%f, %f", h1, h2);
}

void vvp2() {

	float a, b, c, ac, bc, h;

	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);

	ac = c - a;
	bc = c - b;

	h = ac + bc;

	printf("%f, %f, %f", ac, bc, h);

}
void vvp3() {


	float a, b, c, ac, bc, h;

	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);

	ac = c - a;
	bc = b - c;

	h = ac * bc;

	printf("%f", h);
}

void vvp4() {

	float x1, x2, y1, y2, h1, h2, s, p;

	scanf_s("%f", &x1);
	scanf_s("%f", &x2);
	scanf_s("%f", &y1);
	scanf_s("%f", &y2);

	h1 = y1 - x1;
	h2 = y2 - x2;

	s = h1 * h2;
	p = 2 * (h1 + h2);

	printf("%f, %f", s, p);

}

void vvp5() {
	double x1, x2, x3, y1, y2, y3, a, b, c, p, p1, s;


	scanf_s("%lf", &x1);
	scanf_s("%lf", &y1);
	scanf_s("%lf", &x2);
	scanf_s("%lf", &y2);
	scanf_s("%lf", &x3);
	scanf_s("%lf", &y3);

	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

	p1 = a + b + c;
	p = p1 / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));

	printf("%f, %f", s, p1);
}