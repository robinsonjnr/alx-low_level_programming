#include "main.h"
/**
 * print_square - a program that prints a square followed by a new line
 * @size: represent the size of the square
 */
void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');

			if (h == w - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
