#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: the number of arguments
 * @argv: array pointing to the number of program
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
