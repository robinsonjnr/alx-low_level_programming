#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * @c: is the char to be checked
 * Return: 1 if its upper case and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' & c <= 'Z')
		return (1);
	else
		return (0);
}
