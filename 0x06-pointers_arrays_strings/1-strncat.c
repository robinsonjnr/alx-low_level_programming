#include "main.h"

/**
 * _strncat- joins two stinrs using the n bytes
 * @dest: destination of the string
 * @src: source of the string
 * @n: number of strings to be copied
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
