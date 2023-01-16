#include "main.h"

/**
 * _islower - Checks if a char is lowercase.
 *  @c: is the letter to be detected
 *  Return: 1 if c is lowercase and 0 if its false
 *  program written by robinsonjnr
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
