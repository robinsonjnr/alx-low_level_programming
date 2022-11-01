#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 * Return: pointer to the matched byte if set is matched
 * return NULL if set is not matched
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;

	}

	return ('\0');
}
