#include <stdio.h>
/**
 * main-program entry point.
 *
 * Return zero if no error and non zero if errors.
 */
int main(void)
{
	char lowercase;
	char uppercase;
	for (lowercase='a';lowercase <='z'; lowercase++)
	{
	putchar(lowercase);
	}
	for (uppercase='A';uppercase<='Z'; uppercase++)
	{
	putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
