#include "main.h"

/**
 * _strcmp- compares two different strings
 * @s1: the first string
 * @s2: the second string
 * Return: difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int r;
	int o;


	r = 0;
	o = 0;
	while (s1[r] != '\0' && s2[o] != '\0')
	{
		if (s1[r] != s2[o])
		{
			return (s1[r] - s2[o]);
		}
	r++;
	o++;
	}
	return (0);
}
