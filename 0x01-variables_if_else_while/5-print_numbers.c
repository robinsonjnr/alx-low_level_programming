#include <stdio.h>
/**
 * main - prints numbers from zero to nine
 *
 * Return zero if no error and non zero if no erro.
 */
int main(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
