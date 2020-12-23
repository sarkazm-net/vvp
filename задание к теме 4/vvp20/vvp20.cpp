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
    int n, a = 0, b = 0;
    int  mass[100], mass1[100], mass2[100];
  
    scanf_s("%d", &n);

    for (a = 0; a < n; a++)
    {
        printf("mass[%d] : ", a + 1);
        scanf_s("%d", &mass[a]);
    }

    mass1[b] = 1;
    mass2[b] = mass[b];

    for (a = 1; a < n; a++)
    {
        if (mass[a - 1] == mass[a]) 
        {
            ++mass1[b];
        }
        else
        {
            ++b;
            mass1[b] = 1;
            mass2[b] = mass[a];
        }
    }

    for (a = 0; a <= b; a++)
    {
        printf("\n %d %d", mass1[a], mass2[a]);
    }
}

void vvp2()
{
    int n, l, a, b, c, x, y;
    int mass[100], mass1[100];

  
    scanf_s("%d", &n);
    scanf_s("%d", &l);

    for (a = 0; a < n; a++)
    {
        printf("mass[%d] : ", a + 1);
        scanf_s("%d", &mass[a]);
    }

    b = -1;
    x = 1;
    y = n;

    for (a = 1; a < n; a++)
    {
        if (mass[a - 1] != mass[a])
        {
            if (x > l)
            {
                mass1[++b] = 0;
                y -= x - 1;
            }
            else {
                for (c = 0; c < x; ++c)
                {
                    mass1[++b] = mass[a - 1];
                }
            }             x = 0;
        }         ++x;
    }       if (x > l) 
    {
        mass1[++b] = 0;
        y -= x - 1;
    }
    else {
        for (c = 0; c < x; ++c) 
        {
            mass1[++b] = mass[a - 1];
        }
    }

    for (a = 0; a < y; ++a) 
    {
        mass[a] = mass1[a];
    }

    for (a = 0; a < y; ++a)
    {
        printf("\n %d", a + 1, mass[a]);
    }
}

void vvp3()
{
    int n, k, a, b, x, y, z, w;
    int mass[100], mass1[100];

    scanf_s("%d", &n);
    scanf_s("%d", &k);

    for (a = 0; a < n; ++a)
    {
        printf("mass[%d] : ", a + 1);
        scanf_s("%d", &mass[a]);
    }

    x = 1;
    y = 1;
    z = (k == 1 ? 1 : 0);

    for (a = 1; a < n; ++a) 
    {
        if (mass[a - 1] != mass[a])
        {
            x++;
            if (x == k)
            {
                y = a;
            }
            w = a;
        }
        if (x == k)
        {
            z++;
        }
    }

    b = -1;
    for (a = 0; a < y; ++a) 
    {
        mass1[++b] = mass[a];
    }

    for (a = w; a < n; ++a) 
    {
        mass1[++b] = mass[a];
    }

    for (a = y + z; a < w; ++a)
    {
        mass1[++b] = mass[a];
    }

    for (a = y; a < y + z; ++a)
    {
        mass1[++b] = mass[a];
    }

    for (a = 0; a < n; ++a)
    {
        mass[a] = mass1[a];
    }

    for (a = 0; a < n; ++a)
    {
        printf("\n %d %d", a + 1, mass[a]);
    }
}

void vvp4()
{
    float mass[10][2], c, k = 0;
    int a, b, n;

    scanf_s("%d", &n);

    for (a = 0; a < n; ++a)
    {
        printf("\n mass[%d]:", a + 1);

        scanf_s("%f", &mass[a][0]);
        scanf_s("%f", &mass[a][1]);
    }

    b = 0;

    for (a = 0; a < n; ++a)
    {
        if (mass[a][0] < 0 && mass[a][1]>0) 
        {
            c = sqrt(pow(mass[a][0], 2) + pow(mass[a][1], 2));
            if (c > k || a == 0) 
            {
                k = c;
                b = a;
            }
        }
    }
    printf("\n  %d,  %f,  %f", b + 1, mass[b][0], mass[b][1]);
}

void vvp5()
{
    float mass[10][2], l, m;
    int n, a, b, c, x, y, z;

    scanf_s("%i", &n);

    for (a = 0; a < n; ++a) 
    {
        printf("\n mass[%d]:", a + 1);
        scanf_s("%f", &mass[a][0]);
        scanf_s("%f", &mass[a][1]);
    }

    m = 0;

    for (a = 0; a < n; ++a)
    {
        for (b = a + 1; b < n; ++b)
        {
            for (c = b + 1; c < n; ++c)
            {
                l = 0;
                l += sqrt(pow(mass[a][0] - mass[b][0], 2) + pow(mass[a][1] - mass[b][1], 2));
                l += sqrt(pow(mass[a][0] - mass[c][0], 2) + pow(mass[a][1] - mass[c][1], 2));
                l += sqrt(pow(mass[b][0] - mass[c][0], 2) + pow(mass[b][1] - mass[c][1], 2));
                if (l > m)
                {
                    x = a;
                    y = b;
                    z = c;
                    m = l;
                }
            }
        }
    }

    printf("\n Perimetr %f", m);
    printf("\n A %d, x: %f, y: %f", x + 1, mass[x][0], mass[x][1]);
    printf("\n B %d, x: %f, y: %f", y + 1, mass[y][0], mass[y][1]);
    printf("\n C %d, x: %f, y: %f", z + 1, mass[z][0], mass[z][1]);
}


