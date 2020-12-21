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

    float A, B;
    
    scanf_s("%f", &A);
    scanf_s("%f", &B);

    if (A > 2) 
        printf("\n verno %.f", A);
    else 
        printf("\n neverno %.f", A);
    

    if (B <= 3) 
        printf("\n verno %.f", B);
    else 
        printf("\n neverno %.f", B);
}

void vvp2()
{

    int A, B, C;
   
    scanf_s("%i", &A);
    scanf_s("%i", &B);
    scanf_s("%i", &C);

    printf("\n%d", ((A < B) & (B < C)) | ((A > B) & (B > C)));
}

void vvp3()
{
    int a;
    
    scanf_s("%i", &a); 

    if (10 <= a <= 99)
        printf("\n dvuznachnoe %.f", a);
    else
        printf("\n nedvuznachnoe %.f", a);
}

void vvp4()
{
    int N = 0;
    int a = 0, b = 0, c = 0;

    a = N / 100;
    b = N / 10 - a * 10;
    c = N - b * 10 - a * 100;
    if (a < b < c) 
        printf("\n Posledovatelnost vozrastaet %.f");
    else
        if (a > b > c)
            printf("\n Posledovatelnost ubivaet %.f");
        else 
            printf("\n Viskazivanie lojno %.f");
}

void vvp5()
{
    int A;
 
    scanf_s("%i", &A);

    A = abs(A);

    printf("%d\n", A % 10 == A / 1000 & A % 100 / 10 == A % 1000 / 100);
    
}

void vvp6()
{
    int a, b, c;

    scanf_s("%i", &a);
    scanf_s("%i", &b);
    scanf_s("%i", &c);


    if (a * a == b * b + c * c)
        printf("\n pryamougolni %.f");
    else if (b * b == a * a + c * c)
        printf("\n pryamougolni %.f");
    else if (c * c == a * a + b * b)
        printf("\n pryamougolni %.f");
    else
        printf("\n ne pryamougolni %.f");
}

void vvp7()
{
    float a, b, c;
   
    scanf_s("%f", &a);
    scanf_s("%f", &b);
    scanf_s("%f", &c);

    printf("%d\n", (a < b + c) & (b < a + c) & (c < a + b));
}



