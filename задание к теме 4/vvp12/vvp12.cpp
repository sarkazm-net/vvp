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
	int day = 0, mont = 0;

	scanf_s("%d", &mont);
	scanf_s("%d", &day);

	if (day == 1)
	{
		printf_s("\n Pervoe");
	}
	else  if (day == 2)
	{
		printf_s("\n Vtoroe");
	}
	if (day == 3)
	{
		printf_s("\n Tret`e");
	}
	else  if (day == 4) 
	{
		printf_s("\n Chetvertoe");
	}
	if (day == 5)
	{
		printf_s("\n Piatoe");
	}
	else  if (day == 6)
	{
		printf_s("\n  Shestoe");
	}
	if (day == 7)
	{
		printf_s("\n Sedmoe");
	}
	else  if (day == 8)
	{
		printf_s("\n Vosmoe");
	}
	if (day == 9)
	{
		printf_s("\n Deviatoe");
	}
	else  if (day == 10)
	{
		printf_s("\n Deciatoe");
	}
	if (day == 11)
	{
		printf_s("\n Odinnadcatoe");
	}
	else  if (day == 12)
	{
		printf_s("\n Dvenadcatoe");
	}
	if (day == 13) 
	{
		printf_s("\n Trenadcatoe");
	}
	else  if (day == 14)
	{
		printf_s("\n Chetirnadcatoe");
	}
	if (day == 15)
	{
		printf_s("\n Piatnadcatoe");
	}
	else  if (day == 16)
	{
		printf_s("\n Shestnadcatoe");
	}
	if (day == 17) 
	{
		printf_s("\n Semnadcatoe");
	}
	else  if (day == 18)
	{
		printf_s("\n Vosemnadcatoe");
	}
	if (day == 19)
	{
		printf_s("\n Deviatnadcatoe");
	}
	else  if (day == 20) 
	{
		printf_s("\n Dvacatoe");
	}
	if (day == 21) 
	{
		printf_s("\n Dvacat` Pervoe");
	}
	else  if (day == 22)
	{
		printf_s("\n Dvacat` Vtoroe");
	}
	if (day == 23)
	{
		printf_s("\n Dvacat` Tret`e");
	}
	else  if (day == 24)
	{
		printf_s("\n Dvacat` Chetvertoe");
	}
	if (day == 25)
	{
		printf_s("\n Dvacat` Piatoe");
	}
	else  if (day == 26) 
	{
		printf_s("\n Dvacat` Shestoe");
	}
	if (day == 27)
	{
		printf_s("\n Dvacat` Sedmoe");
	}
	else  if (day == 28) 
	{
		printf_s("\n Dvacat` Vosmoe");
	}
	if (day == 29) 
	{
		printf_s("\n Dvacat` Deviatoe");
	}
	else  if (day == 30)
	{
		printf_s("\n Tridcatoe");
	}
	if (day == 31)
	{
		printf_s("\n Tridcat` Pervoe");
	}
	if (mont == 1)
	{
		printf_s("\n ianvaria");
	}
	if (mont == 2)
	{
		printf_s("\n  phevralia");
	}
	if (mont == 3)
	{
		printf_s("\n marta");
	}
	if (mont == 4) 
	{
		printf_s("\n aprelia");
	}
	if (mont == 5)
	{
		printf_s("\n maya");
	}
	if (mont == 6)
	{
		printf_s("\n iuna");
	}
	if (mont == 7)
	{
		printf_s("\n iula");
	}
	if (mont == 8) 
	{
		printf_s("\n avgusta");
	}
	if (mont == 9)
	{
		printf_s("\n sentiabria");
	}
	if (mont == 10)
	{
		printf_s("\n octiabria");
	}
	if (mont == 11) 
	{
		printf_s("\n noiabria");
	}
	if (mont == 12) 
	{
		printf_s("\n decabria");
	}
}

void vvp2()
{
	int x;
	char y;

	scanf_s("%c", &y);
	scanf_s("%d", &x);

	switch (y) 
	{
	case 'S':
		switch (x)
		{
		case 1:
			y = 'Z';
			break;
		case 0:
			y = 'S';
			break;
		case -1:
			y = 'V';
			break;
		}
		break;
	case 'V':
		switch (x)
		{
		case 1:
			y = 'S';
			break;
		case 0:
			y = 'V';
			break;
		case -1:
			y = 'U';
			break;
		}
	case 'U':
		switch (x) 
		{
		case 1:
			y = 'V';
			break;
		case 0:
			y = 'U';
			break;
		case -1:
			y = 'Z';
			break;
		}
		break;
	case 'Z':
		switch (x)
		{
		case 1:
			y = 'U';
			break;
		case 0:
			y = 'Z';
			break;
		case -1:
			y = 'S';
			break;
		}
	}

	printf("\n %c", y);
}

void vvp3()
{
	int x;
	
	scanf_s("%d", &x);

	if (x / 10 == 1)
	{
		switch (x) 
		{
		case 10:
			printf("\n 10 uchebnih zadanii");
			break;
		case 11:
			printf("\n 11 uchebnih zadanii");
			break;
		case 12:
			printf("\n 12 uchebnih zadanii");
			break;
		case 13:
			printf("\n 13 uchebnih zadanii");
			break;
		case 14:
			printf("\n 14 uchebnih zadanii");
			break;
		case 15:
			printf("\n 15 uchebnih zadanii");
			break;
		case 16:
			printf("\n 16 uchebnih zadanii");
			break;
		case 17:
			printf("\n 17 uchebnih zadanii");
			break;
		case 18:
			printf("\n 18 uchebnih zadanii");
			break;
		case 19:
			printf("\n 19 uchebnih zadanii");
			break;
		}
	}
	else 
	{
		switch (x / 10) 
		{
		case 2:
			printf("20");
			break;
		case 3:
			printf("30");
			break;
		case 4:
			printf("40");
			break;
		}
		switch (x % 10)
		{
		case 1:
			printf("1");
			break;
		case 2:
			printf("2");
			break;
		case 3:
			printf("3");
			break;
		case 4:
			printf("4");
			break;
		case 5:
			printf("5");
			break;
		case 6:
			printf("6");
			break;
		case 7:
			printf("7");
			break;
		case 8:
			printf("8");
			break;
		case 9:
			printf("9");
			break;
		}
		switch (x % 10)
		{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			printf("\n uchebnih zadanii");
			break;
		case 1:
			printf("\n uchebnoe zadanie");
			break;
		case 2:
		case 3:
		case 4:
			printf("\n uchebnih zadania");
			break;
		}
	}
}

void vvp4()
{
	int x;
	scanf_s("%d", &x);

	switch (x / 100) 
	{
	case 1:
		printf("\n sto");
		break;
	case 2:
		printf("\n dvesti");
		break;
	case 3:
		printf("\n trista");
		break;
	case 4:
		printf("\n chetirista");
		break;
	case 5:
		printf("\n piatsot");
		break;
	case 6:
		printf("\n shesot");
		break;
	case 7:
		printf("\n semsot");
		break;
	case 8:
		printf("\n vosemsot");
		break;
	case 9:
		printf("\n deviatsot");
		break;
	}
	if ((x % 100) / 10 == 1)
	{
		switch (x % 100)
		{
		case 10:
			printf("\n deciat");
			break;
		case 11:
			printf("\n odinnadcat");
			break;
		case 12:
			printf("\n dvenadcat");
			break;
		case 13:
			printf("\n trinadcat`");
			break;
		case 14:
			printf("\n chetirnadcat`");
			break;
		case 15:
			printf("\n piatnadcat`");
			break;
		case 16:
			printf("\n shestnadcat`");
			break;
		case 17:
			printf("\n semnadcat`");
			break;
		case 18:
			printf("\n vosemnadcat`");
			break;
		case 19:
			printf("\n  deviatnadcat`");
			break;
		}
	}
	else {
		switch ((x % 100) / 10) 
		{
		case 2:
			printf("\n dvadcat`");
			break;
		case 3:
			printf("\n tridcat`");
			break;
		case 4:
			printf("\n sorok");
			break;
		case 5:
			printf("\n piatdeciat");
			break;
		case 6:
			printf("\n shestdeciat");
			break;
		case 7:
			printf("\n semdeciat");
			break;
		case 8:
			printf("\n vosemdeciat");
			break;
		case 9:
			printf("\n devianosto");
			break;
		}
		switch (x % 10)
		{
		case 1:
			printf("\n 1");
			break;
		case 2:
			printf("\n 2");
			break;
		case 3:
			printf("\n 3");
			break;
		case 4:
			printf("\n 4");
			break;
		case 5:
			printf("\n 5");
			break;
		case 6:
			printf("\n 6");
			break;
		case 7:
			printf("\n 7");
			break;
		case 8:
			printf("\n 8");
			break;
		case 9:
			printf("\n 9");
			break;
		}
	}
}

void vvp5()
{
	int x;

	scanf_s("%d", &x);

	switch ((x) % 10)
	{
	case 0:
	case 1:
		printf("belo");
		break;
	case 2:
	case 3:
		printf("cherno");
		break;
	case 4:
	case 5:
		printf("zeleno");
		break;
	case 6:
	case 7:
		printf("krasno");
		break;
	case 8:
	case 9:
		printf("jelto");
		break;
	}
	switch (x % 12) 
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 9:
	case 10:
	case 11:
		printf("ii");
		break;
	case 6:
	case 7:
	case 8:
		printf("go");
		break;
	}

	switch ((x + 8) % 12)
	{
	case 0:
		printf("\n krisi");
		break;
	case 1:
		printf("\n korovi");
		break;
	case 2:
		printf("\n tigra");
		break;
	case 3:
		printf("\n zaica");
		break;
	case 4:
		printf("\n dracona");
		break;
	case 5:
		printf("\n zmei");
		break;
	case 6:
		printf("\n loshadi");
		break;
	case 7:
		printf("\n ovci");
		break;
	case 8:
		printf("\n obesiani");
		break;
	case 9:
		printf("\n kurici");
		break;
	case 10:
		printf("\n sobaki");
		break;
	case 11:
		printf("\n svin`i");
		break;
	}
}
