#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints mul of two numbers followed by
 * a new line
 * @argc: the number of arguments in the program
 * @argv: array that points to the arguments
 * Return: 0 if argument is two and 1 if more or less
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n" mul);

	return (0);
}
