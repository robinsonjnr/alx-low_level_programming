#include "main.h"

/**
 * largest_number - prints the largest number of three imputed integers
 * @a: let this be the variable for the value of the first integer
 * @b: be the variable for the value of the second integer
 * @c: be the variable for the value of the last integer
 * Return: largest value
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;

	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}
	return (largest);
}

