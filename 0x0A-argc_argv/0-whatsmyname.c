#include <stdio.h>

/**
 * main - prints the name of a program followed
 * by a new line.
 * @argc: the number of argument supplied to the program
 * @argv: the array of pointers to the program
 * Return: always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);

}
