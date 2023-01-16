#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: represents the number of \ characters to be printed
 */

void print_diagonal(int n)
{
	int dl, space;

	if (n > 0)
	{
		for (dl = 0; dl < n; dl++)
		{
			for (space = 0; space < dl; space++)
				_putchar(' ');
			_putchar('\\');

			if (dl == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
