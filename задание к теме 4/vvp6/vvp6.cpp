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
void vvp7();

int main()
{
	vvp1();
	vvp2();
	vvp3();
	vvp4();
	vvp5();
	vvp6();
	vvp7();
}

void vvp1() {

	float a = 2, b = 5;
	float res;

	res = a;
	a = b;
	b = res;

	printf("%f, %f", a, b);

}

void vvp2() {
	

    float a = 2, b = 5, c = 4;             
	float res;
	float daf;
	float aim;

	
	res = b;
	daf = c;
	aim = a;
	b = a;
	c = res;
	a = daf;

    printf("\n%f, %f, %f", a, b, c);

}

void vvp3() {


	float a = 2, b = 5, c = 4;
	float res;
	float daf;
	float aim;


	res = b;
	daf = c;
	aim = a;
	c = a;
	b = daf;
	a = res;

	printf("\n%f, %f, %f", a, b, c);

}

void vvp4() {

	float x;
	double y;

	scanf_s("%f", &x);

	y = (3 * pow(x, 6)) - (6 * pow(x, 2)) - 7;

	printf("\n%lf", y);

}

void vvp5() {

	float x;
	double y;

	scanf_s("%f", &x);

	y = (4 * pow((x-3), 6)) - (7 * pow((x-3), 3)) + 2;

	printf("\n%lf", y);

}

void vvp6() {

	float A;
	float x;

	scanf_s("%f", &A);

	A = A * A;                  // 1 переменая и 3 умножения
	A = pow(A, 2);
	x = pow(A, 2);

	printf("\n%f", x);

}

void vvp7() {

	float A;
	float x;
	float y;

	scanf_s("%f", &A);

	y = pow(A, -1);             //2 переменных и 5 умножений
	A = A * A;
	A = pow(A, 4);
	x = pow(A, 2);
	A = x * y;

	printf("\n%f", A);

}