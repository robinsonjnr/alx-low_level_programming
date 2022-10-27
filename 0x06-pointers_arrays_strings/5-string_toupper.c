#include "main.h"

/**
 * string_toupper - converts lowercase char to upper case char
 * @n: pointer
 * Return: character
 */
char *string_toupper(char *n)
{
	int alpha;

	alpha = 0;
	while (n[alpha] != '\0')
	{
		if (n[alpha] >= 'a' && n[alpha] <= 'z')
			n[alpha] = n[alpha] - 32;
		alpha++;
	}
	return (n);
}
