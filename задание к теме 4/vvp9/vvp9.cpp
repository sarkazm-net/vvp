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

    int N;

    scanf_s("%d", &N);

    N -= (N / 3600) * 3600;

    printf("minuti=%d", N / 60);
    printf("\nsekundi=%d", N -= (N / 60) * 60);
}

void vvp2()
{
    int K, res;
    
    scanf_s("%i", &K);
  
    res = (K % 7) + 0;

    printf("\n%i", res);
}

void vvp3()
{
    int K, N, res;

    scanf_s("%i", &K);
    scanf_s("%i", &N);

    res = ((K + N - 2) % 7) + 1;

    printf("\n%i", res);
}

void vvp4()
{
    int A, B, C;
    int res1, res2;
    
    scanf_s("%d", &A);
    scanf_s("%d", &B);
    scanf_s("%d", &C);

    res1 = (A / C) * (B / C);
    res2 = A * B - (C * C * (A / C) * (B / C));

    printf("\n%d", res1);
    printf("\n%d", res2);
}

void vvp5()
{
    int y, res;

    scanf_s("%i", &y);

    res = ((y - 1) / 100) + 1;

    printf("\n%i", res);
}




