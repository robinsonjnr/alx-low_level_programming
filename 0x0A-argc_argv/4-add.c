#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints addition of a two positive
 * numbers followed by a new line
 * @argc: the number of arguments
 * @argv: array that points to the program
 * Return: 1 if numbers are non-digit and 0
 * if otherwise.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
