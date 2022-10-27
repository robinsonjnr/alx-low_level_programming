#include "main.h"

/**
 * reverse_array - reverses the content of an array of numbers
 * @a: is the array
 * @n: is the number of element in the array
 * Return: reverse of arrays
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
