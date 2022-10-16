#include <stdio.h>
/**
 * main-program entry point.
 *
 * Return zero if no error and non zero if errors.
 */
int main(void)
{
	char lc;
	char uppercase;
	for (lc='a';lc <='z'; lc++)
	{
		putchar(lc);
	}
	for (uppercase='A';uppercase<='Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
