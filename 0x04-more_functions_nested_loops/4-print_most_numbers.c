#include "main.h"

/**
 * print_numbers - program prints numbers from 0-9
 * it gives exception to number 2 and 4
 */
void print_numbers(void)
{
	int numbers;

		for (numbers = 0; numbers <= 9; numbers++)
		{
			if (numbers != 2 && numbers != 4)
				_putchar(numbers);
		}
		_putchar('\n');

}
