#include "main.h"

/**
 * print_last_digit - prints the last digit of a num
 * @n: should be the variable for the given number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld - '0');
	return (ld);
}
