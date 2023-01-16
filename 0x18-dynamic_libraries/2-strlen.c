#include "main.h"

/**
 * _strlen- prints the length of a string
 * @s: the string
 * Return: length of str string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
