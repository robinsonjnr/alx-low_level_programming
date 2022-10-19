#include <stdio.h>

/**
 * main - prints all natural numbers below 1024
 *
 * Return: 0 iof sucesful and non zero if failure
 */
int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	}

	printf("%d\n", sum);

	return (0);

}
