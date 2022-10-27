#include "main.h"
#include <unistd.h>

/**
 * _putchar - write c to stdout
 * @c: is the character to be printed
 * Return: 1 on success and -1 if no success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
