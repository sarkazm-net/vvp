#include <iostream>
#include <stdio.h>
#include <math.h>


	int main()
	{
		int i, f, z, x;
		int array[] = { 4, 6, 7, 1, 2, 9 };
		int n = sizeof(array) / sizeof(int);
		for (z = n / 2; z > 0; z /= 2) {
			for (i = z; i < n; i++) {
				f = array[i];
				for (f = i; f >= z; f -= z) {
					if ( x < array [f - z])
						array[x] = array[x - z];
					else break;
				}
				array[f] = x;
			}
		}
		for (i = 0; i < n; i++);
		{
			printf_s("%d", array[i]);
			
		}
		return 0;
    }
