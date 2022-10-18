#include "main.h"

/**
 * print_sign - prints the sign of a particular num
 * @n: should be the number in question
 * Return: 1 if the number is greater than zero;
 * 0 if the number is equal to zero
 * -1 if the number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (0);
	}
}
