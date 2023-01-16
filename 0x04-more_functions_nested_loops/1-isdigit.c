#include "main.h"

/**
 * _isdigit - prints numbers from 0-9
 * @c: is the number to be checked
 * Return: 1 if c is a number and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
