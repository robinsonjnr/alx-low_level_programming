#include "main.h"

/**
 * print_numbers - prints numbers from 0-9 followed
 * by a new line.
 */
void print_numbers(void)
{
	char number;

	for (number = '1'; number <= '9'; number++)

		putchar(number);

	putchar('\n');

}
