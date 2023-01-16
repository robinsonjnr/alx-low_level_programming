#include "main.h"

/**
 * _strcpy- Write a function that copies the string pointed to by src
 * @dest: string destination
 * @src: string source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
