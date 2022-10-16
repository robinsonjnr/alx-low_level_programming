#include <stdio.h>
/**
 * main - prints numbers from zero to nine
 *
 * Return zero if no error and non zero if no erro.
 */
int main(void)
{
	int numbers;
	for (numbers = 0; numbers <= 9; numbers++)
		printf("%d", numbers);
	printf('\n');
	return (0);
}
