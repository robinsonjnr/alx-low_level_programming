#include <stdio.h>

/**
 * main - prints the sum of even valued fib sequence
 * the sequence should not exceed 4000000
 * Return: 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;

	float totalsum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			totalsum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;

	}
	printf("%.0f\n", totalsum);

	return (0);

}
