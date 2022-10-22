#include "main.h"

/**
 * print_line - prints a striaght line in the terminal
 * @n: represents the number of time _ is to be printed
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
