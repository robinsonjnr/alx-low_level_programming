#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	for (count = count - 1; count >= 0; count--)
		_putchar(s[count]);

	_putchar('\n');

}
