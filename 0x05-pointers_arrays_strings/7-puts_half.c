#include "main.h"

/**
 * puts_half- prints half a string followed by a new line
 * @str: input
 * Return: half the input
 */

void puts_half(char *str)
{
	int hal = 0;

	while (*str != '\0')
	{
		hal++;
		str++;
	}

	str -= (hal / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}
