#include "main.h"

/**
 * print_triangle - prints triangle using the # char
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int triad, index;

	if (size > 0)
	{
		for (triad = 1; triad <= size; triad++)
		{
			for (index = size - triad; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < triad; index++)
				_putchar('#');

			if (triad == size)
				continue;

			_putchar('\n');

		}

	}
	_putchar('\n');
}
