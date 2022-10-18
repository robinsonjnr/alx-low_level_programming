#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic, uppercase and lowercase.
 * @c: is the character to be checked
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') ||
		(c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
