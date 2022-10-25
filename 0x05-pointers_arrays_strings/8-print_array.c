#include "main.h"
#include <stdio.h>

/**
 * print_array- prints an array of numbers followed by a new line
 * @a: the array of integers
 * @n: the number of value to be printed
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]);

		if (r != n - 1)
			printf(",");
	}

	printf("\n");
}
