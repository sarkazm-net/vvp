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

	float a, b, s, p;

	scanf_s("%f", &a);
	scanf_s("%f", &b);

	s = a * b;
	p = 2 * (a + b);

	printf("%.f, %.f", s, p);


}

void vvp2() {

	float l, d;
	const float p = 3.14;

	scanf_s("%f", &d);

	l = p * d;

	printf("%.f", l);

}

void vvp3() {

	float a, b, h;

	scanf_s("%f", &a);
	scanf_s("%f", &b);

	h = (a + b) / 2;

	printf("%f", h);

}

void vvp4() {

	float a, b, q, w, e, r;

	scanf_s("%f", &a);
	scanf_s("%f", &b);

	q = pow(a, 2) + pow(b, 2);
	w = pow(a, 2) - pow(b, 2);
	e = pow(a, 2) * pow(b, 2);
	r = pow(a, 2) / pow(b, 2);

	printf("%.f, %.f, %.f, %.2f", q, w, e, r);
}


void vvp5() {

	float a, b, q, w, e, r;

	scanf_s("%f", &a);
	scanf_s("%f", &b);

	q = abs(a) + abs(b);
	w = abs(a) - abs(b);
	e = abs(a) * abs(b);
	r = abs(a) / abs(b);

	printf("%.f, %.f, %.f, %.2f", q, w, e, r);
}