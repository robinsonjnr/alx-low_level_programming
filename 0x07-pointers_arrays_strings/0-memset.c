#include "main.h"

/**
 * _memset-  fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @n: the memory to be filled
 * @s: points to the memory to be filled
 * @b: used to fill the memory
 * Return: pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char
