#include "main.h"

/**
 * print_most_numbers - program prints numbers from 0-9
 * it gives exception to number 2 and 4
 */
void print_most_numbers(void)
{
	int numbers;

		for (numbers = 0; numbers <= 9; numbers++)
		{
			if (numbers != 2 && numbers != 4)
				_putchar((numbers % 10) + '0');
		}
		_putchar('\n');

}
