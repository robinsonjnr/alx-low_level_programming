#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 * @c: is the char to be printed
 * Return: 1 if successful and -1 if unseccessful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
