#include <stdio.h>


/**
 * print_to_98 - prints numbers from input to 98
 * numbers must be in chronological order, seperated by a comma
 * and followed by a space.
 * @n: is the number we begin counting from
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
