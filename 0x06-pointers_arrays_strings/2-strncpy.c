#include "main.h"

/**
 * _strncpy- copies a string with n
 * @dest: destination
 * @src: source
 * @n: number of character to be copied
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
