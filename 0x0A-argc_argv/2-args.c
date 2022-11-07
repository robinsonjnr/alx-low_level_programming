#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: the number of arguments in the program
 * @argv: array that points to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int argmt;

	for (argmt = 0; argmt < argc; argmt++)
		printf("%s\n", argv[argmt]);

	return (0);
}
