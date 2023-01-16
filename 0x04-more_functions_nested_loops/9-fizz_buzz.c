#include <stdio.h>

/**
 * main - prints numbers from 1-100
 * for multiples of 3 and 5 program prints fizzbuzz
 * for multiple of 3 program prints fizz
 * for multiple of 5 program prints buzz
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
